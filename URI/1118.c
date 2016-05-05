#include <stdio.h>

void calculo(){
	double n1, soma = 0, i = 1;

		while(i <= 2){
			scanf("%lf", &n1);
				if(n1 < 0 || n1 > 10){
					printf("nota invalida\n");

				} else{
					soma+=n1;
					i++;

				}
		}

	printf("media = %.2f\n", soma/2);

}

void main (){
int x;
	calculo();

		printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &x);

			while(1){
				 if(x == 1){
					calculo();
						printf("novo calculo (1-sim 2-nao)\n");
						scanf("%d", &x);

				} else if(x == 2){
					break;

				} else {
					printf("novo calculo (1-sim 2-nao)\n");
					scanf("%d", &x);

				}
			}


}