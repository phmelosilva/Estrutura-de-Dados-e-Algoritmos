#include "lista.h"
#include "pilha.h"

int empilha(pilha_st *p, Item e){
    return insereInicio(p, e); 
}

Item topo(pilha_st *p){
    return p->inicio->e;
}

Item desempilha(pilha_st *p) {
    return removeInicio(p);
}
