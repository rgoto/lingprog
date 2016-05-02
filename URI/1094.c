#include <stdio.h>
#include <string.h>

int main (void){
	int i, x;
	char letra[128];
	double quantia, sapo = 0, rato = 0, coelho = 0, total = 0;

	scanf("%d", &x);

		for(i = 1; i <= x; i++){
			scanf("%lf%s", &quantia, &letra);

			if(letra == 'C'){
				coelho += quantia;
				total += quantia;

			} else if(letra == 'S'){
				sapo += quantia;
				total += quantia;

			} else if(letra == 'R'){
				rato += quantia;
				total += quantia;

			}
		}

printf("Total: %.0lf\n", total);
printf("Total de coelhos: %.0lf\n", coelho);
printf("Total de ratos: %.0lf\n", rato);
printf("Total de sapos: %.0lf\n", sapo);
printf("Percentual de coelhos: %.2lf %%\n", coelho*100/total);
printf("Percentual de ratos: %.2lf %%\n", rato*100/total);
printf("Percentual de sapos: %.2lf %%\n", sapo*100/total);

return 0;


}
