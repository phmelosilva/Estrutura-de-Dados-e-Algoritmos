#include <stdio.h>
#include <string.h>

int main() {
    char[] cadeia;
    scanf("%s", cadeia);
    moveX(cadeia, 0);
    return 0;
}
// Recebo a cadeia de caracteres e uma variável contadora
char moveX(char[] chain, int i) {
    i = 0;
    int tamanho = strlen(chain);
    if (strcmp(chain[i], "x") == 0) { //Verifica se o 1° char é x
        chain[i]=NULL;
        cadeia+x;
        i++;
        chain[tamanho] = "x"; 
        moveX(chain[i], i); 
    } else { 
        moveX(chain[i+1], i+1);
    }
    printf("%s", chain);
}

// ********** ORIGINAL ********
// Recebo a cadeia de caracteres e uma variável contadora
// char moveX(char[] chain, int i) {
//     i = 0;
//     if (strcmp(chain[i], "x") == 0) { //Verifica se o 1° char é x
//         i++;
//         chain[i] = "x"; //Aloca o próximo índice com o char x.
//         moveX(chain[i], i); //Testando o próximo índice.
//     } else { // Se o char em questão não for x, ele pula pro pŕoximo índice com a função
//         moveX(chain[i+1], i+1);
//     }
//     printf("%s", chain);
// }

// ******** TESTE **************
// char moveX(char[]chain, int i) {
//     i = 0;
//     if (strcmp(*chain, "x") == 0) {
//         i++;
//         *(chain + i) = "x";
//         moveX(*(chain+i), i);
//     } else {
//         moveX(*(chain+(i+1)), i+1);
//     }
//     printf("%s", *chain);
// }