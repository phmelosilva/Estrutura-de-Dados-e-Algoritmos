#include <stdio.h>
#include <string.h>

int main() {
    char string[201];
    int pares;
    scanf("%s", string);
    pares = pares_caracteres(&string);
    printf("Número de pares: %d\n", pares);
    printf("String passada: %s\n", string);
    return 0;
}

int pares_caracteres(char *palavra) {
    //Preciso contar a ocorrência do char 
    if (palavra[0] != '\0') {
        if(palavra[0] == palavra[1] || palavra[0] == palavra[2]) {
            return 1 + pares_caracteres(*(palavra+1));
        } else {
            pares_caracteres(*(palavra+1));
        }
    } else {
        return;
    }
    // printf("%s\n", palavra);
    // return 1;
}