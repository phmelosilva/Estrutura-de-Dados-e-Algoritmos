#include <stdio.h>
int main() {
    int num, ret = 0;
    while (scanf("%d", &num) == 1) {
        ret++;
    }
    printf("%d\n", ret);
    return 0;
}