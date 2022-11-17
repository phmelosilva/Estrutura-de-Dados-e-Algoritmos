#include <stdio.h>

int main() {
    printf("%d\n", fat(5));
    return 0;
}

int fat(int x) {
    if (x == 0) return 1;
    return x*fat(x-1);
}

