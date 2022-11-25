#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", somarDigitos(num));
    return 0;
}

int somarDigitos(int numero) {
    int soma = 0;
    int digitos = 0;

    // Conta quantidade de dígitos do número
    while (numero >= 1) {
        soma += numero % 10;
        numero  = numero / 10;
        digitos++;
    }
    printf("%d\n", digitos);
    return soma;
}

// int somarDigitos(int numero) {
//     int soma = 0;

//     while (numero != 0) {
//         soma   += numero % 10;
//         numero  = numero / 10;
//     }

//     return soma;
// }