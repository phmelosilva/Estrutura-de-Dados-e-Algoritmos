#include "lista.h"
#include "fila.h"
#include "pilha.h"



int enfila(fila_st *p, Item e) {
    return insereInicio(p, e);
}
Item espia(fila_st *p) {
    return p->ultimo->e;
}

Item desenfila(fila_st *p) {
    return removeUltimo(p);
}
