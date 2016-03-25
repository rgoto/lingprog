#include <stdio.h>

int main (void){

    int CP, NP, Cp, Np;
    double V, v, T, t, VT;

        scanf("%d %d %lf", &CP, &NP, &V);
        scanf("%d %d %lf", &Cp, &Np, &v);
            T = (NP * V);
            t = (Np * v);
            VT = T + t;

    printf("VALOR A PAGAR: R$ %0.2lf\n", VT);

return 0;
}
