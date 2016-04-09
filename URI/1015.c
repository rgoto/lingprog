#include <stdio.h>
#include <math.h>

int main(void){
    double x, y, x2, y2, d, p1, p2;
        scanf ("%lf%lf%lf%lf", &x, &y, &x2, &y2);
            p1=x-x2;
            p2=y-y2;
            d=sqrt ( (pow(p1,2))+(pow(p2,2)) );
    printf("%.4lf\n", d);
return 0;

}
