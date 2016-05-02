#include <stdio.h>

int main (void){
	int valor, i, n;
		scanf("%d", &valor);

		for(i = 1; i <= valor; i++){
			scanf("%d", &n);

				if(n == 0){
					printf("NULL\n");

				} else if(n % 2 == 0 && n > 0){
					printf("EVEN POSITIVE\n");

				} else if(n % 2 == 0 && n < 0){
					printf("EVEN NEGATIVE\n");

				} else if(n % 2 != 0 && n > 0){
					printf("ODD POSITIVE\n");

				} else if(n % 2 != 0 && n < 0){
					printf("ODD NEGATIVE\n");

				}
		}
return 0;

}
