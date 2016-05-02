#include <stdio.h>

int main (void){
	double n, soma = 0;
	int i, p = 0;

		for(i = 1; i <= 6; i++){
			scanf("%lf", &n);
			
				if(n>=0){
				p++;
				soma+=n;
			}
		}

	printf("%d valores positivos\n", p);
	printf("%.1f\n", soma/p);

return 0;

}
