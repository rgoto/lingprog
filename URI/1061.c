#include <stdio.h>

int main (void){
	char dia_i[5], dia_f[5], p[2], p2[2];
	int DIA_I, HORA_I, MIN_I, SEG_I, DIA_F, HORA_F, MIN_F, SEG_F, DIA_T, HORA_T, MIN_T, SEG_T, TOTAL, D, H, M, S;

	scanf("%s%d", dia_i, &DIA_I);
	scanf("%d%s%d%s%d", &HORA_I, p, &MIN_I, p2, &SEG_I);
	scanf("%s%d", dia_f, &DIA_F);
	scanf("%d%s%d%s%d", &HORA_F, p, &MIN_F, p2, &SEG_F);


DIA_T = (DIA_F - DIA_I - 1)*86400;
HORA_T = (24 - 1 - (HORA_I + HORA_F))*3600;
MIN_T = (60 - MIN_I - 1 + MIN_F)*60;
SEG_T = 60 - SEG_I + SEG_F;
TOTAL = DIA_T + HORA_T + MIN_T + SEG_T;

D = TOTAL/86400;
printf("%d dia(s)\n", D);

D = TOTAL%86400;
H = D/3600;
printf("%d hora(s)\n", H);

H = D%3600;
M = H/60;
printf("%d minuto(s)\n", M);

S = H%60;
printf("%d segundo(s)\n", S);

return 0;

}

