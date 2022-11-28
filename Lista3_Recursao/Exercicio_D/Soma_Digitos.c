#include <stdio.h>

int main() {
    unsigned long int num;
    scanf("%ld", &num);
    printf("%d\n", somarDigitos(num));
    return 0;
}

int somarDigitos(unsigned long int numero) {
    if (numero % 10 == numero) {
        return numero;
    } 
    return ((numero % 10) + somarDigitos(numero / 10)); 
    }
