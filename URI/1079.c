#include <stdio.h>

int main (void){
	int x, i;
	double a, b, c;
		
		scanf("%d", &x);
		
			for (i = 1; i <= x; i++){
				scanf("%lf%lf%lf", &a, &b, &c);
				printf("%.1lf\n", (((a*2)+(b*3)+(c*5))/10));
			
			}
return 0;


}
