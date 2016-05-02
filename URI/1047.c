#include <stdio.h>

int main (void){
	int horai, horaf, mini, minf, hora_t, min_t;
		scanf("%d%d", &horai ,&mini);
		scanf("%d%d", &horaf ,&minf);

	if(horaf - horai > 0){
		hora_t = horaf - horai;
	} else {
		hora_t = 24 + (horaf - horai);
	} if(minf - mini >= 0){
		min_t = minf - mini;
	} else {
		min_t = 60 + (minf - mini);
		hora_t--;
	}
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora_t, min_t);

return 0;

}
