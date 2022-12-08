#include <stdio.h>
#include <string.h>
// Função strstr() -> devolve um ponteiro com a 1° ocorrência da substring passada.
int maior_substring(char *str, char *substr) {
        char *ponteiro;
        ponteiro = strstr(str, substr);
}

int main() {
    char str[101];
    char sub[101];
    char *ponteiro;
    scanf("%s", str);
    scanf("%s", sub);
    ponteiro = strstr(str, sub);
    if (ponteiro) {
        printf("\n%c%c%c\n", *ponteiro, *(ponteiro+1), *(ponteiro+2));
    } else {
        printf("\nPonteiro nulo.\n");
    }
    return 0;
}