#include <stdio.h>

int main (void){
	int x, in = 0, out = 0, i, valor;
		scanf("%d", &x);

			for(i = 1; i <= x; i++){
				scanf("%d", &valor);
					if(valor >= 10 && valor <= 20){
						in++;
					} else{
						out++;
					}
			}

				printf("%d in\n%d out\n", in, out);
return 0;

}
