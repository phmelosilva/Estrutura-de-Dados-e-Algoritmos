#include <stdio.h>

int main() {
    int vetor[10];
    int *ponteiro;
    printf("%d\n", *vetor);
    // vetor = vetor +2;
    // vetor++;
    // vetor = ponteiro;
    printf("ponteiro: %p\n", ponteiro);
    ponteiro = vetor;
    printf("ponteiro: %p\n", ponteiro);
    ponteiro = vetor+2;
    printf("vetor[0]: %d\n", *vetor);
    printf("ponteiro: %p\n", ponteiro);
    return 0;
}