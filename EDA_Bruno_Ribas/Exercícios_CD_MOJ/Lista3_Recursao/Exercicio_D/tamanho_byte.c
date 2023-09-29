#include <stdio.h>

int main()
{
    printf("int : %d bytes\n", sizeof( int ) );
    printf("short int: %d bytes\n", sizeof( short ) );
    printf("long int: %d bytes\n", sizeof( long ) );
    printf("long unsigned int: %d bytes\n", sizeof( long unsigned ) );
    printf("long signed int: %d bytes\n", sizeof( long signed ) );
    return 0;
}

// int somarDigitos(int numero) {
//     int soma = 0;

//     while (numero != 0) {
//         soma   += numero % 10;
//         numero  = numero / 10;
//     }

//     return soma;
// }