#ifndef PILHA_H
#define PILHA_H

#include "lista.h"
#define pilha_st cabeca_st

int empilha(pilha_st *p, Item e);
Item topo(pilha_st *p);
Item desempilha(pilha_st *p);

#endif // !PILHA_H