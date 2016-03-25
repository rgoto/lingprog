#include <stdio.h>

int main (void) {
    double area, Raio;
    scanf("%lf", &Raio);
    area = 3.14159;

    printf("A=%.4lf\n", area*(Raio*Raio));
    return 0;
}
