#include <malloc.h>
#include "lista.h"

int inicializaLista(cabeca_st *h) {
    h->inicio = NULL;
    h->ultimo = NULL;
    h->tam = 0;
    return 1;
}

int insereInicio(cabeca_st *h, Item e) {
    no_st *novoNo = malloc(sizeof(no_st));
    if(novoNo == NULL) return 0;
    novoNo->e = e;
    novoNo->prox = h->inicio;
    h->inicio = novoNo;
    h->tam++;
    return 1; 
}

int insereDepois(no_st *no, Item e) {
    no_st *novoNo = malloc(sizeof(no_st));
    if(novoNo == NULL) return 0;
    novoNo->e = e;
    novoNo->prox = no->prox;
    no->prox = novoNo;
    return 1;
}

Item removeInicio(cabeca_st *h) {
    no_st *toRemove = h->inicio;
    h->inicio = h->inicio->prox;
    Item ret = toRemove->e;
    free(toRemove);
    h->tam--;
    return ret;
}

Item removeUltimo(cabeca_st *h) {
    no_st *toRemove = h->ultimo;
    h->ultimo = h->ultimo->ant;
    Item ret = toRemove->e;
    free(toRemove);
    h->tam--;
    return ret;
}

void printaCharItens(cabeca_st *h) {
    no_st *tmp = h->inicio;
    while(tmp != NULL) {
        printf("%c ", tmp->e);
        tmp = tmp->prox;
    }
    printf("\n");
}
