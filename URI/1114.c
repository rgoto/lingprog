#include <stdio.h>

int main (void){
	int i, a;

		for(i = 1; i<= 99; i++){
			scanf("%d", &a);
				if(a != 2002){
					printf("Senha Invalida\n");
				
				} else {
					printf("Acesso Permitido\n");
					break;
				
				}
		}
return 0;

}
