#include <stdio.h>

int main (void){
	int pares = 0, i, v;

		for(i = 1; i <= 5; i++){
			scanf("%d", &v);

				if( v % 2 == 0){
					pares++;
				}
		}
	printf("%d valores pares\n", pares);


return 0;

}
