#include <stdio.h>
#include <string.h>

int main() {
    char string[201];
    int pares;
    scanf("%s", string);
    pares = pares_caracteres(&string);
    printf("%d\n", pares);
    return 0;
}

int pares_caracteres(char *palavra) {
    //Preciso contar a ocorrência do char 
    if (strlen(palavra) < 3) return 0;
    else {
        if (palavra[0] == palavra[2]) return 1+pares_caracteres(palavra+1);
        else {
            return 0+pares_caracteres(palavra+1);
        }
    }
    //     if(palavra[0] == palavra[1] || palavra[0] == palavra[2]) {
    //         return 1 + pares_caracteres(*(palavra+1));
    //     } else {
    //         pares_caracteres(*(palavra+1));
    //     }
    // } else {
    //     return;
    // }
    // printf("%s\n", palavra);
    // return 1;
}