#include <stdio.h>

int main() {
    int conta1, conta2, conta3, soma;
    scanf("%d", &conta1);
    scanf("%d", &conta2);
    scanf("%d", &conta3);
    scanf("%d", &soma);
    if (soma == (conta1+conta2+conta3)) {
        printf("Acertou\n");
    } else {
        printf("Errou\n");
    }
    return 0;
}