#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    char string[27];
    int tamanho;
    struct no *proximo;
    struct no *anterior;
} no;

typedef struct lista {
    no *inicio;
    no *fim;
} lista;

void inicializaLista(lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
}

// void insereInicio(lista *l, char *valor) {
//     no *novo = malloc(sizeof(no));
//     strcpy(novo->string, valor);
//     novo->proximo = l->inicio;
//     novo->anterior = NULL;

//     if (l->inicio != NULL) {
//         l->inicio->anterior = novo;
//     }

//     l->inicio = novo;

//     if (l->fim == NULL) {
//         l->fim = novo;
//     }
// }

void insereFim(lista *l, char *valor) {
    no *novo = malloc(sizeof(no));
    strcpy(novo->string, valor);
    novo->tamanho = strlen(novo->string);
    novo->proximo = NULL;
    novo->anterior = l->fim;

    if (l->fim != NULL) {
        l->fim->proximo = novo;
    }

    l->fim = novo;

    if (l->inicio == NULL) {
        l->inicio = novo;
    }
}


int main() 
{
    lista *cidades = malloc(sizeof(lista));
    inicializaLista(cidades);

    char cidade[27];
    while (scanf("%s", cidade) != EOF)
    {
        insereFim(cidades, cidade);
    }
    printf("\n");
    no *atual = cidades->inicio;
    while (atual != NULL)
    {
        if (atual->proximo == NULL)
        {
            printf("%s\n", atual->string);
            break;
        }
        int len1 = atual->tamanho;
        char ultimoCaractere[2];
        ultimoCaractere[0] = atual->string[atual->tamanho - 1];
        ultimoCaractere[1] = '\0';

        char primeiroCaractere[2];
        primeiroCaractere[0] = atual->proximo->string[0];
        primeiroCaractere[1] = '\0';
    
        if (atual->proximo != NULL && strcasecmp(ultimoCaractere, primeiroCaractere) == 0)
        {
            insereFim(cidades, atual->proximo->string);
            atual->proximo = atual->proximo->proximo;
            continue;
        }

        printf("%s\n", atual->string);
        atual = atual->proximo;
    }
    return 0;
}
