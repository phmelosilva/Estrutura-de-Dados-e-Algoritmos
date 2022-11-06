#include <stdio.h>

int main() {
    int *p;
    p++;
    printf("%d\n", p);
    (*p)++;
    printf("%p\n", p);
    *(p++);
    printf("%p\n", p);
    return 0;
}