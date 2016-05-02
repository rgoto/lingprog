#include <stdio.h>

int main (void){
	int contador, i = 1, valor;
		scanf("%d", &valor);
			contador = valor;
			
			while(i <= 6){

				if(contador % 2 != 0){
					printf("%d\n", contador);
					i++;
				}
				contador++;

			}
return 0;

}

