#include <stdio.h>

int main (void){
	int n, q;
	double v;
		scanf("%d %d", &n ,&q);

	switch (n){
		
		case 1:
			printf ("Total: R$ %.2f\n", v=4*q);
			break;

		case 2:
			printf("Total: R$ %.2f\n", v=4.5*q);
			break;
		
		case 3:
			printf("Total: R$ %.2f\n", v=5*q);
			break;

		case 4:
			printf("Total: R$ %.2f\n", v=2*q);
			break;

		case 5:
			printf("Total: R$ %.2f\n", v=1.5*q);
			break;

		default:
			break;

	}	

return 0;

}
