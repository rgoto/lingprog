#include <stdio.h>

int main (void){
	double salario, z;
		scanf("%lf", &salario);

	if(salario <= 2000.00){
		printf("Isento\n");
	
	} else if(salario <= 3000.00){
		z = ((salario - 2000)*0.08);
		printf("R$ %.2lf\n", z);
	
	} else if(salario <= 4500.00){
		z = ((salario - 3000)*0.18 + 1000*0.08);
		printf("R$ %.2lf\n", z);

	} else {
		z = ((salario - 4500)*0.28 + 1000*0.08 + 1500*0.18);
		printf("R$ %.2lf\n", z);

	}
return 0;

}
