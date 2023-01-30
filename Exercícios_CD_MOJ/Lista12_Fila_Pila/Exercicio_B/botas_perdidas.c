#include <stdio.h>

int main() {
    int n, m, pares = 0;
    char p;
    int esquerda[61], direita[61];
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i <= 60; i++) {
            esquerda[i] = 0;
            direita[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            scanf("%d %c", &m, &p);
            if (p == 'E')
                esquerda[m]++;
            else
                direita[m]++;
        }
        for (int i = 30; i <= 60; i++) {
            pares += esquerda[i] < direita[i] ? esquerda[i] : direita[i];
        }
        printf("%d\n", pares);
        pares = 0;
    }
    return 0;
}
