//===------- TreeInstantiator.h - Semantic Tree Transformation -----*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//===----------------------------------------------------------------------===//
//
//  This file implements a semantic tree transformation that takes a given
//  AST and rebuilds it, possibly transforming some nodes in the process.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_LIB_SEMA_TREEINSTANTIATOR_H
#define LLVM_CLANG_LIB_SEMA_TREEINSTANTIATOR_H

#include "clang/Parse/CaptureNode.h"
#include "TreeTransform.h"

namespace clang {
using namespace sema;

class TreeInstantiator : public TreeTransform<TreeInstantiator> {
public:
  typedef std::map<StringRef, Node::BaseNode*> ActualArgsTy;

private:
  ActualArgsTy ActualArguments;

public:
  TreeInstantiator(Sema &SemaRef) : TreeTransform<TreeInstantiator>(SemaRef) {}

  bool AlwaysRebuild() { return true; }

  Node::BaseNode* Instantiate(Node::BaseNode *S, ActualArgsTy Actuals) {
    ActualArguments = Actuals;
    return TransformStmt(S).get();
  }

  /*Expr* Instantiate(Expr *E, ActualArgsTy Actuals) {
    ActualArguments = Actuals;
    return TransformExpr(E).get();
  }*/

  StmtResult
  TransformStmtPlaceholder(StmtPlaceholder *S) {
    if (ActualArguments.count(S->getName())) {
      Stmt *arg = (Stmt*)ActualArguments.at(S->getName());
      return arg;
    }
    // If the placeholder is not defined by one of the arguments,
    // it must be a formal argument to an enclosing AST capture.
    // Hence we do not resolve the placeholder here but leave this to
    // the 'TreeInstantiator' which instantiates the enclosing capture.
    return S;
  }
  ExprResult
  TransformExprPlaceholder(ExprPlaceholder *E) {
    if (ActualArguments.count(E->getName())) {
      Expr *arg = (Expr*)ActualArguments.at(E->getName());
      return arg;
    }
    // If the placeholder is not defined by one of the arguments,
    // it must be a formal argument to an enclosing AST capture.
    // Hence we do not resolve the placeholder here but leave this to
    // the 'TreeInstantiator' which instantiates the enclosing capture.
    return E;
   }

  Decl *TransformDecl(SourceLocation Loc, Decl *D) {
    if (VarDecl *VD = dyn_cast_or_null<VarDecl>(D)) {
      if (VD->hasInit()) {
        Expr *NewInit = TransformExpr(VD->getInit()).get();
        IdentifierInfo *II = VD->getIdentifier();
        VarDecl *NewDecl =
          VarDecl::Create(VD->getASTContext(), VD->getDeclContext(),
                          VD->getLocStart(), /*imprecise*/ VD->getLocStart(),
                          II, VD->getType(), VD->getTypeSourceInfo(),
                          VD->getStorageClass());
        NewDecl->setInit(NewInit);
        transformedLocalDecl(D, NewDecl);

        // FIXME: There must be a better way to replace declarations
        // which are in scope.
        Scope *S = getSema().getScopeForContext(VD->getDeclContext());
        S->RemoveDecl(D);
        S->AddDecl(NewDecl);
        // FIXME (cont'ed) Especially this seems a bit odd (but at least
        // it evades an assertion):
        NewDecl->getDeclName().setFETokenInfo(NewDecl);
      }
    }
    return TreeTransform<TreeInstantiator>::TransformDecl(Loc, D);
  }
  // Do not look through a DeclRefExpr. If we did, we would end up calling
  // TranformDecl on the referenced declaration.
  // However, if the referenced declaration has previously been transformed,
  // we need to replace the referenced declaration with the transformed one.
  ExprResult TransformDeclRefExpr(DeclRefExpr *E) {
    Decl *OldDecl = E->getDecl();
    if (TransformedLocalDecls.find(OldDecl) != TransformedLocalDecls.end()) {
      ValueDecl *NewDecl = cast<ValueDecl>(TransformedLocalDecls[OldDecl]);
      return RebuildDeclRefExpr(E->getQualifierLoc(), NewDecl,
                                E->getNameInfo(), /* FIXME */ nullptr);
    }
    return E;
  }
};

} // end namespace clang

#endif // LLVM_CLANG_LIB_SEMA_TREEINSTANTIATOR_H
