#include <stdio.h>

int main (void){
	int valor, i;
		scanf("%d", &valor);

		for(i = 1; i <= valor; i++){
			if(i%2 == 0){
				printf("%d^2 = %d\n", i, i*i);
			}
		}
return 0;


}
