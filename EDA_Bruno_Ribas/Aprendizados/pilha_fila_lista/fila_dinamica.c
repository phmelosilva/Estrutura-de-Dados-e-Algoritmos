#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct Fila {
    struct No *inicio;
    struct No *fim;
} Fila;

void inicializaFila(Fila *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
}

void enfila(Fila *fila, int valor) {
    No *novoNo = malloc(sizeof(struct No));
    novoNo->valor = valor;
    novoNo->proximo = NULL;

    if (fila->fim != NULL) {
        fila->fim->proximo = novoNo;
    }
    fila->fim = novoNo;

    if (fila->inicio == NULL) {
        fila->inicio = novoNo;
    }
}

void desenfila(Fila *fila) {
    if (fila->inicio == NULL) {
        return;
    }

    No *noRemovido = fila->inicio;
    fila->inicio = fila->inicio->proximo;

    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }

    free(noRemovido);
}

int espia(Fila *fila) 
{
    return fila->inicio->valor;
}