#include <stdio.h>

int main() {
    char cadeia[101];
    scanf("%s", cadeia);
    moveX(&cadeia);
    return 0;
}

void moveX(char *chain) {
    if (chain[0] == '\0') return;
    if (chain[0] == 'x') {
        moveX(&chain[1]);
    } else {
        printf("%c", chain[0]);
        moveX(&chain[1]);
        return;
    }
    printf("%c", chain[0]);
}
