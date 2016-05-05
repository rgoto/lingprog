#include <stdio.h>

int main (void){
	double n1, soma = 0, i = 1;

		while(i <= 2){
			
			if(n1 < 0 || n1 > 10){
				printf("nota invalida\n");

			} else{
				soma+=n1;
				i++;

			}
		}
	printf("media = %.2f\n", soma/2);
	return 0;

}
