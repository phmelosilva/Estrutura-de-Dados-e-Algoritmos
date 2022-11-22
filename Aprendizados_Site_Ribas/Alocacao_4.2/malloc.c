#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%c", transforma_byte_em_string('81'));
    return 0;
}

char transforma_byte_em_string(char c) {
    char *ptr;
    ptr = malloc(1);
    *ptr = c;
    return *ptr;
}