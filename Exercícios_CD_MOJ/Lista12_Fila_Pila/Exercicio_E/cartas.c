#include <stdio.h>
#include <stdlib.h>
#define Item int 
#define pilha_st cabeca_st

typedef struct no_st {
    Item e; 
    struct no_st *ant, *prox;
} no_st;

typedef struct cabeca_st {
    no_st *inicio;
    no_st *ultimo;
    int tam;
} cabeca_st;

int inicializaLista(cabeca_st *h);
int insereInicio(cabeca_st *h, Item e);
Item removeInicio(cabeca_st *h);
void printaCharItens(cabeca_st *h);


int main() {
    int n;
    int *descartados = malloc(sizeof(int));
    scanf("%d", &n);
    cabeca_st *head_p = malloc(sizeof(cabeca_st));
    inicializaLista(head_p);
    for (int i = 1; i = n; i++)
    {
        empilha(head_p, i);
    }
    int j = 0;
    printf("%d\n", head_p->inicio->e);
    // while (head_p->inicio != n)
    // {
    //     descartados[j] =
    // }

    return 0;
}

int empilha(pilha_st *p, Item e){
    return insereInicio(p, e); 
}

Item topo(pilha_st *p){
    return p->inicio->e;
}

Item desempilha(pilha_st *p) {
    return removeInicio(p);
}

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

Item removeInicio(cabeca_st *h) {
    no_st *toRemove = h->inicio;
    h->inicio = h->inicio->prox;
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
