#include <stdio.h>
#include "lista.h"
#include "pilha.h"
#include "fila.h"

int main (int argc, char *argv[])
{
    // TESTE PILHA
    pilha_st P;
    inicializaLista(&P);
    empilha(&P, 'a');
    printaCharItens(&P);
    empilha(&P, 'b');
    printaCharItens(&P);
    empilha(&P, 'c');
    printaCharItens(&P);
    desempilha(&P);
    printaCharItens(&P);
    empilha(&P, 'e');
    printaCharItens(&P);
    empilha(&P, topo(&P));
    printaCharItens(&P);
    empilha(&P, desempilha(&P));
    printaCharItens(&P);
    desempilha(&P);
    printaCharItens(&P);
    empilha(&P, empilha(&P, topo(&P))+'d');
    printaCharItens(&P);
    desempilha(&P);
    printaCharItens(&P);
    empilha(&P, desempilha(&P) + desempilha(&P));
    printaCharItens(&P);



    // TESTE FILA
    //cabeca_st *H;
    //inicializaLista(H);
    //insereInicio(H, 1);
    //insereInicio(H, 2);
    //insereInicio(H, 3);
    //insereInicio(H, 4);
    //removeInicio(H);
    //printf("%d\n", H->inicio->e);
    return 0;
}
