#include <stdio.h>
int main (void){
    int c100, c50, c20, c10, c5, c2 ,c1;
    float v, m1, m5, m25, m10, m05, m01;
        scanf ("%d", &v);
            printf("NOTAS:");

        c100=v/100;
            printf("%d nota(s) de R$ 100,00\n", c100);
                v=v%100;
                c50=v/50;
                    printf("%d nota(s) de R$ 50,00\n", c50);
                        v=v%50;
                        c20=v/20;
                            printf("%d nota(s) de R$ 20,00\n", c20);
                            v=v%20;
                            c10=v/10;
                                printf("%d nota(s) de R$ 10,00\n", c10);
                            v=v%10;
                             c5=v/5;
                        printf("%d nota(s) de R$ 5,00\n", c5);
                    v=v%5;
                    c2=v/2;
                printf("%d nota(s) de R$ 2,00\n", c2);
            v=v%2;
            c1=v/1;
        printf("%d nota(s) de R$ 1,00\n", c1);


}
