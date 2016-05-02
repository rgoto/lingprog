#include <stdio.h>

int main (void){
	double n;
	int i, p = 0;

		for(i=1; i<=6; i++){
			scanf("%lf", &n);
			if(n>=0){
			p++;
			}
		}

	printf("%d valores positivos\n", p);

return 0;

}
