#include <stdio.h>
#include <math.h>

int main (void) {
double a,b,c,delta,x,x2;
	
	scanf("%lf %lf %lf",&a,&b,&c);
		
		delta = sqrt ((b*b) - (4*a*c));
		x  = ((-b) + delta) / (2*a);
		x2 = ((-b) - delta) / (2*a);

			if (a == 0 || delta<0)
				printf("Impossivel calcular\n");
			else 
				printf("R1 = %.5f\nR2 = %.5f\n",x,x2);

	return 0;

}