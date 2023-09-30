#include <stdio.h>

char troca_x_y(char *string) {
    if (*string == '\0') return;
    if (*string == 'x') {
        *string = 'y';
    }
    printf("%c", *string);
    troca_x_y(string+1);
}

int main() {
    char string[81];
    scanf("%s", string);
    troca_x_y(string);
    return 0;
}