#include <stdio.h>

int main() {
    printf("%d\n", fib(7));
    return 0;
}

int fib(int x) {
    if ( x == 1 || x == 2) return 1;
    return fib(x-1)+fib(x-2);
}

