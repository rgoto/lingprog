#include <stdio.h>

int main (void){
	int i, x, y;

		for(i = 1; i<=999; i++){
			scanf("%d%d", &x, &y);
				if (x == y){
					break;
				
				} else if(y>x){
					printf("Crescente\n");
				} else{
					printf("Decrescente\n");
				}
		}
return 0;

}
