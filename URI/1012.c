#include <stdio.h>

int main (void) {
    double A, B, C, TRI, CIR, TRA, QUA, RET , PI = 3.14159;
        scanf("%lf%lf%lf", &A, &B , &C);
            TRI = A*C/2;
            CIR = PI * C * C;
            TRA = (A + B) * C/2;
            QUA = B * B;
            RET = A * B;
        printf ("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", TRI, CIR, TRA, QUA, RET);

}
