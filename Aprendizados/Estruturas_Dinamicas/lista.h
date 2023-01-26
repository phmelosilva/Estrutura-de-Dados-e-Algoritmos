#ifndef LISTA_H
#define LISTA_H 

#define Item int 

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
int insereDepois(no_st *no, Item e);
Item removeInicio(cabeca_st *h);
Item removeUltimo(cabeca_st *h);
void printaCharItens(cabeca_st *h);

#endif // !LISTA_H