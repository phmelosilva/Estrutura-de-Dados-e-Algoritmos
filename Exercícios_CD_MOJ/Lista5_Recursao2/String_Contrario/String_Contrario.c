#include <stdio.h>

char inverte_string(char *string) {
    if (*string == '\0') return;
    inverte_string(string+1);
    printf("%c", *string);
}

int main() {
    char string[501];
    scanf("%s", string);
    inverte_string(&string);
    return 0;
}