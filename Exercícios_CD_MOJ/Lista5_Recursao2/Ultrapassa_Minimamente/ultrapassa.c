#include <stdio.h>
#include <stdlib.h>

int ultrapassa(int *vetor, int limite, int tamanho_vetor, int soma) {
    // tentando com laços
    if (tamanho_vetor == 0) return 0;
    soma += *vetor;
    if (soma > limite) 
    {
        ultrapassa(vetor+1,limite, tamanho_vetor - 1, 0);
        printf("%d\n", *vetor);
        return 0;
    }
    ultrapassa(vetor+1, limite, tamanho_vetor - 1,  soma);
    return 0;

    // for (int i = 0; i < tamanho_vetor; i++) {
    //     soma += vetor[i];
    //     if (vetor[i] == vetor[tamanho_vetor]) return 0;
    //     if (soma >= limite) {
    //         ultrapassa(vetor+1, limite_funcao, tamanho_v);
    //         printf("%d\n", vetor[i]);
    //         return;
    //     } 
    // }
}

int main() {
    int sequencia_v[1000], i = 0;
    int limite, soma = 0;
    // for (int i = 0; sequencia_v[i] == 0; i++) {
    //     scanf("%d", &sequencia_v[i]);
    // }

    scanf("%d", &sequencia_v[i]);
    while (sequencia_v[i] != 0) {
        scanf("%d", &sequencia_v[++i]);
    }
    scanf("%d", &limite);
    ultrapassa(sequencia_v, limite, i, soma);
    return 0;
}
