#include <stdio.h>

int main (void){
    int v, a, m ,d;
        scanf("%d", &v);
    a=v/365;
    m=v%365/30;
    d=v%365%30;
        printf("%d ano(s)\n", a);
        printf("%d mes(es)\n", m);
        printf("%d dia(s)\n", d);
return 0;
}
