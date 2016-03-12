#include <stdio.h>

int main(void) {
int x, y;
printf("Digite um valor:\n");
scanf("%d", &x);
printf("Digite outro valor:\n");
scanf("%d", &y);
printf("O maior valor digitado foi:\n");
if (x > y) {
        printf("%d\n", x);
    } else {
        printf("%d\n", y);
    }
    return 0;
}
