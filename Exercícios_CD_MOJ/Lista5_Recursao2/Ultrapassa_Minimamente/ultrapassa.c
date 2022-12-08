#include <stdio.h>
#include <stdlib.h>

int ultrapassa(int *vetor, int limite, int tamanho_vetor) {
    // if (*vetor == 0) return;
    // printf("%d", *vetor);
    // ultrapassa(vetor+1);

    // tentando com laços
    int limite_funcao = limite;
    int tamanho_v = tamanho_vetor;
    int soma = 0;
    for (int i = 0; i < tamanho_vetor; i++) {
        if (vetor[i] != vetor[tamanho_vetor]) {
            if (soma >= limite) {
                printf("%d\n", vetor[i]);
                ultrapassa(vetor+1, limite_funcao, tamanho_v);
            } else {
                soma += vetor[i];
            }
        } else {
            return 0;
        }
    }
}

int main() {
    int sequencia_v[1000], i = 0;
    int limite;
    // for (int i = 0; sequencia_v[i] == 0; i++) {
    //     scanf("%d", &sequencia_v[i]);
    // }

    scanf("%d", &sequencia_v[i]);
    while (sequencia_v[i] != 0) {
        scanf("%d", &sequencia_v[++i]);
    }
    scanf("%d", &limite);
    ultrapassa(sequencia_v, limite, i);
    return 0;
}