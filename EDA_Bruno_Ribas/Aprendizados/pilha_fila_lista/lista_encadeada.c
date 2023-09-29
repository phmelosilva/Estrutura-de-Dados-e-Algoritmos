#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
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

void insereInicio(lista *l, int valor) {
    no *novo = malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = l->inicio;
    novo->anterior = NULL;

    if (l->inicio != NULL) {
        l->inicio->anterior = novo;
    }

    l->inicio = novo;

    if (l->fim == NULL) {
        l->fim = novo;
    }
}

void insereFim(lista *l, int valor) {
    no *novo = malloc(sizeof(no));
    novo->valor = valor;
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