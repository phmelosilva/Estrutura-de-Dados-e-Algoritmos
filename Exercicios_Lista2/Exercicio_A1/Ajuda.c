#include <stdio.h>

int main() {
    int pessoas, contas, total_conta=0, soma, i = 0;
    scanf("%d\n", &pessoas);
    while (i < pessoas) {
        scanf("%d\n", &contas);
        total_conta += contas;
        i++;
    }  
    scanf("%d\n", &soma);
    if (soma == total_conta) {
        printf("Acertou\n");
    } else {
        printf("Errou\n");
    }
    return 0;
}