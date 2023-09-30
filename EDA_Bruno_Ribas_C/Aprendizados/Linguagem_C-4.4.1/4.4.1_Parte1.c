#include <stdio.h>

int main() {
    int *p;
    printf("%p\n", *p);
    int *q=&p;
    printf("%d\n",q);
    p++;
    printf("%p\n", *(p));
    printf("%p\n", *(p));

    return 0;
}