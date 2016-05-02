#include <stdio.h>

int main (void){
	int i, x, p, a = 0;

		for(i = 1; i <= 100; i++){
			scanf("%d", &x);
				if(x > a) {
					a = x;
					p = i;
				}
		}
	printf("%d\n%d\n", a, p);
return 0;


}
