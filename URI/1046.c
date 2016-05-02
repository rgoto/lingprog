#include <stdio.h>

int main (void){
	int final, inicio, tempo_t;
	scanf("%d%d", &inicio, &final);

	if(final - inicio > 0){
		tempo_t = final - inicio;
	} else {
		tempo_t = 24 + (final - inicio);

	}
		printf("O JOGO DUROU %d HORA(S)\n", tempo_t);
return 0;

}
