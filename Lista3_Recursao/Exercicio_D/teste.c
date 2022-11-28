#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int resto = num % 10;
    int div = num / 10;
    printf("-------------I1\n");
    printf("%d\n", resto);
    printf("%d\n", div);
    int resto2 = div % 10;
    int div2 = div / 10;
    printf("-------------I2\n");
    printf("%d\n", resto2);
    printf("%d\n", div2);
    int resto3 = div2 % 10;
    int div3 = div2 / 10;
    printf("-------------I3\n");
    printf("%d\n", resto3);
    printf("%d\n", div3);
    return 0;
}
