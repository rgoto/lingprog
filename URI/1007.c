#include <stdio.h>

int main (void) {
    int number_func, horas;
        scanf("%d", &number_func);
        scanf("%d", &horas);

    double valor, total;
        scanf("%lf", &valor);

    total = (valor * horas);

printf("NUMBER = %d\n", number_func);
printf("SALARY = U$ %.2lf\n", total);

return 0;
}
