#include <stdio.h>

int main (void){
    double a, p;
    p = 3.14159;

    scanf("%lf",&a);

    printf("VOLUME = %.3lf\n", a*a*a*p*4.0/3);
    return 0;
}
