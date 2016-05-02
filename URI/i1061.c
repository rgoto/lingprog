#include <stdio.h>

int main (void){
	char dia_i[5], dia_f[5], p[2], p2[2];
	int DIA_I, HORA_I, MIN_I, SEG_I, DIA_F, HORA_F, MIN_F, SEG_F, DIA_T, HORA_T, MIN_T, SEG_T;

	scanf("%s%d", dia_i, &DIA_I);
	scanf("%d%s%d%s%d", &HORA_I, p, &MIN_I, p2, &SEG_I);
	scanf("%s%d", dia_f, &DIA_F);
	scanf("%d%s%d%s%d", &HORA_F, p, &MIN_F, p2, &SEG_F);

		if(DIA_F == DIA_I){
			DIA_T = 0;
		
		} else {
			DIA_T = DIA_F - DIA_I;
		}
		

		if(HORA_F - HORA_I > 0){
			HORA_T = HORA_F - HORA_I; 
		
		} else {
			HORA_T = 24 + (HORA_F - HORA_I);
			DIA_T--;
		}


		if(MIN_F - MIN_I >= 0){
			MIN_T = (MIN_F - MIN_I);
		
		} else {
			MIN_T = 60 + (MIN_F - MIN_I);
			HORA_T--;
		}


		if(SEG_F - SEG_I >= 0){
			SEG_T = (SEG_F - SEG_I);
		
		} else {
			SEG_T = 60 + (SEG_F - SEG_I);
			MIN_T--;
		}

			printf("%d dia(s)\n", DIA_T);
			printf("%d hora(s)\n", HORA_T);
			printf("%d minuto(s)\n", MIN_T);
			printf("%d segundo(s)\n", SEG_T);

return 0;

}