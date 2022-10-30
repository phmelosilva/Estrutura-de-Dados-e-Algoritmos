#include <stdio.h>
#include <string.h>

int main() {
    int tem_marte=0;
    char buf[31];
    while (scanf("%s", buf) == 1) {
        if (strcmp(buf, "marte") == 0) {
           printf("Leonardo Cicero Marciano\n");
           tem_marte = 1;
        }
    }
    if (tem_marte == 0) {
        printf("none\n");
    }
    return 0;
}