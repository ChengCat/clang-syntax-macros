
// Functions "subs" and "add".

static float y = 17.0;

const int N = 100;

int a[N];
int b[N];
int c[N];
int d[N];

int subs(int *A, int *B, int i) {
  return (A)[ (B)[(i)] ];
}

int* add(int *A, int off1, int off2) {
  return ((A) + (2*(off1)* \
                              (1+3*((off2)*((off1) \
                                            + (off1)*((off2) \
                                                          + (4*((off1)+(off2))) \
                                                          ) \
                                            )\
                                    )\
                               )\
                                    )\
                            )
  ;
}

int main() {

  for (int i = 0; i < N; i++) {
    a[i] = i;
    b[i] = i;
    c[i] = i;
    d[i] = i;
  }

  int *ap = a;
  int *bp = b;
  int *cp = c;
  int *dp = d;

  int o1 = 1, o2 = 2;

  int k = N-1;
  int res = subs(ap, add(bp, o1, o2), k);

  res = subs(cp, add(dp, o1, o2), k);
  {
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);








    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    // again

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);








    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);




    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);


    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);

    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
    res = subs(cp, add(dp, o1, o2), k);
  }
  return res;
}
