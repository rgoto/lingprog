#include <stdio.h>

int main (void){
    int a, b, c, ab, maior;
        scanf ("%d %d %d", &a, &b, &c);
            ab=(a+b+abs(a-b))/2;
            maior=(ab+c+abs(ab-c))/2;
        printf("%d eh o maior\n", maior);
}
