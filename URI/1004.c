#include <stdio.h>

int main (void) {

    double A, B, MAX;

    scanf("%lf", &A);
    scanf("%lf", &B);

    MAX = ((A*0.35) + (B*0.75))/11 *10;

    printf("MEDIA = %.5lf\n", MAX);
    return 0;
}
