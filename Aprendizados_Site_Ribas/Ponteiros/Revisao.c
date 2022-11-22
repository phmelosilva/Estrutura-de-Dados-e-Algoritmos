#include <stdio.h>

int main() {
    int *a, *b;
    a = 3;
    b = 5;
    printf("%d\n", a+b); // Não compila!
    return 0;
}