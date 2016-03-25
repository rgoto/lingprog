#include <stdio.h>

int main (void){

    char nome[30];
    double bonus, salario, vendas;

    scanf("%s", nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);

    bonus = salario + (vendas*0.15);

    printf ("TOTAL = R$ %.2lf\n", bonus);

    return 0;
}
