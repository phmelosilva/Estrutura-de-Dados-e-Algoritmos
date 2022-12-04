#include <stdio.h>

int balanceada(int *vetor, int inicio, int fim) {
    if (vetor[inicio]+vetor[fim] == vetor[inicio+1]+vetor[fim-1]) {
        if(inicio > fim) {
            return 1;
        }
        balanceada(vetor, (inicio+1), (fim-1));
    } else {
        return 0;
    }
}

int main() {
    int vetor[] = {1, 3, 7, 11, 15, 17};
    printf("%d\n", balanceada(vetor, 0, 5));
}