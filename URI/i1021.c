#include <stdio.h>
int main() {

double d[] = {100, 50, 20, 10, 5, 2, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
double n, t = 0.00;

    scanf("%lf", &n);
        printf("NOTAS:\n");
do {

printf("%lf nota(s) de R$ %lf,00\n", n / d[t], d[t]);
if (n >= d[t])

n -= d[t] * (n / d[t]);

} while(d[t++] != 1.00);



    return 0;

}
