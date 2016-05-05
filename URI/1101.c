#include <stdio.h>

int main (void){
	int m, n, i, soma = 0, count;

		for(i = 1; i<= 999; i++){
			scanf("%d%d", &m, &n);

				soma=0;

				if(n <= 0 || m <= 0){
					break;
				
				} else if(n>m){
					for(count = m; count<=n; count++){
						printf("%d ", count);
						soma+=count;
					}
				
				} else {
					for(count = n; count<=m; count++){
						printf("%d ", count);
						soma+=count;
					}
				}
			
			printf("Sum=%d\n", soma);
		}

return 0;

}
