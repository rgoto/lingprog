#include <stdio.h>

int main (void){
	int x, y, z, i, count, soma = 0;

	scanf("%d", &z);

		for(i=1; i<=z; i++){
			scanf("%d%d", &x, &y);
				
				if(y>x){
					for(count = x+1; count<y; count++){
						if(count%2 != 0){
							soma+=count;
						
						}
					}
				
				} else {
					for(count = y+1; count<x; count++){
						if(count%2 != 0){
							soma+=count;
		
						}
					}
				}
			
			printf("%d\n", soma);
			soma = 0;
		}

return 0;


}
