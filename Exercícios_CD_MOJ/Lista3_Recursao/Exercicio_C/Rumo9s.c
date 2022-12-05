#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiplo_9(char *numero) {
    int soma = 0;
    for (int i=0; i < strlen(numero); i++) {
        soma += numero[i] - '0';
    }
    return soma;
    // if (*digito == '\0') {
    //     return 0;
    // } else {
    //     soma = ((*digito) - '0') + multiplo_9(digito+1);
    // }
    // return soma;
    // if (numero == 0) {
    //     return 0;
    // } else {
    //     soma = numero%10 + multiplo_9(numero/10);
    // }
    // return soma;
}

int grau_9(int soma_numero) {
    // int soma;
    // if (soma_numero == 0) {
    //     return 0;
    // }
    // soma = soma_numero%10 + grau_9(soma_numero/10);
    // return soma;
    int soma = 0;

    while (soma_numero != 0) {
        soma   += soma_numero % 10;
        soma_numero  = soma_numero / 10;
    }

    return soma;
}

int main() {
    char numero[1000];
    int soma_digitos, grau9 = 1;
    scanf("%s",&numero);
    if (multiplo_9(numero) % 9 == 0) {
        soma_digitos = multiplo_9(numero);
        while (grau_9(soma_digitos) != 9) {
            grau9++;
            grau_9(soma_digitos/10);
        }
        printf("%s is a multiple of 9 and has 9-degree %d.\n", numero, grau9);
    } else {
        printf("%s is not a multiple of 9.\n", numero);
    }
    return 0;
}


