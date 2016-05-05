#include <stdio.h>

int main (void){
	int x, y, z, i;
		scanf("%d", &z);

		for(i = 1; i <= z; i++){
			scanf("%d%d", &x, &y);

				if(y == 0){
					printf("divisao impossivel\n");
				
				} else {
					printf("%.1lf\n", (double) x/y);
				
				}
		}
return 0;


}
