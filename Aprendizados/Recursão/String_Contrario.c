#include <stdio.h>

int main() {
    isc("Ola");
    printf("\n");
    return 0;
}
// isc = imprime string contrário
void isc(char *s) {
    if (*s == '\0') return;
    isc(s+1);       // isc("Ola") printa O -> isc("la") printa l -> isc("a") printa a -> isc("") \0 -> return  
    printf("%c", *s); // Imprimi o valor ao contrário porque os valores que ele pega quando volta da recursão, pega do último pro primeiro
                      // Por isso o isc() vindo antes do print imprime a palavra ao contrário.
}
