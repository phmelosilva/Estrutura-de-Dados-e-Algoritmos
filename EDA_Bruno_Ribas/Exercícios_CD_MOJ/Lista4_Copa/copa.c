#include <stdio.h>

int main() {
    int t = 0, n = 0, pontos;
    int total_pontos;
    char time[11];
    
    while (scanf("%d %d", &t, &n) >= 2 && t != 0) {
        int total_pontos = 0;
        for (int i = 0; i < t; i++) {
            scanf("%s  %d", time, &pontos);
            total_pontos += pontos;
        }

        printf("%d\n", 3 * n - total_pontos);
    }
    return 0;
}