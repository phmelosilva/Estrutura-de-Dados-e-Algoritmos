#include <stdio.h>

int main() {
    int jogos[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int gols_esquerda, gols_direita;
    char equipe_ganhou_jogo[15];
    char equipes[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
    for (int i = 0; i < 15; i++) {
        
        scanf("%d %d", &gols_esquerda, &gols_direita);
        if (gols_esquerda > gols_direita) {
            equipe_ganhou_jogo[i] = equipes[i];
        } else {
            equipe_ganhou_jogo[i] = equipes[i+1];
        }

        //  if (i % 2 != 0) { //Faz com que não ocorra jogo da equipe B com a C, apenas entre as pares com as próximas ímpares
        //     continue;
        // }

    }
    for (int i = 0; i < 15; i++) {
        printf("%c\n", equipe_ganhou_jogo[i]);
    }

    return 0;
}