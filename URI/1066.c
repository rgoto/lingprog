#include <stdio.h>

int main (void){
	int n[5], i, positivo = 0, negativo = 0, par = 0, impar = 0;

		for(i = 1; i <= 5; i++){
			scanf("%d", &n[i]);

				if(n[i] % 2 == 0) {
					par++;
				} 
					if(n[i]%2 == 1 || n[i]%2 == -1){
					impar++;
				} 
					if(n[i] > 0){
					positivo++;
				} 
					if(n[i] < 0){
					negativo++;
				}
		}

			printf("%d valor(es) par(es)\n", par);  
		    printf("%d valor(es) impar(es)\n", impar);  
		    printf("%d valor(es) positivo(s)\n", positivo);  
		    printf("%d valor(es) negativo(s)\n", negativo); 

return 0;

}