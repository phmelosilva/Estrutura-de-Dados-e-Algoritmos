#include <stdio.h>

int main() {
    int i;
    int num;
    while ( scanf("%x", &num) != EOF) {
        char *valor = &num;
        for (i=0; i < 4; i++) {
            if (valor[i] == 0) {
                printf("\n");
                return 0;
            }
            printf("%c",(char)valor[i]);
        }   
        // 61 + 6c + 4f
        // A + L + O
    }
};