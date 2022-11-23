#include <stdio.h>

int main() {
    int num, resultado;
    scanf("%d", &num);
    while (num != 0) {
        f91(num);
        printf("f91(%d) = %d\n", num, f91(num));
        scanf("%d", &num);
    }
    return 0;
}

int f91(int n) {
    int maldicao;
     if (n <= 100) {
         maldicao = f91(f91(n+11));
    }

    if (n >= 101) {
        maldicao = n - 10;
        return maldicao;
    }
} 