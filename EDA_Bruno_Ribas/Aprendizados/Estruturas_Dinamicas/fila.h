#ifndef FILA_H
#define FILA_H

#include "lista.h"
#define fila_st cabeca_st

int enfila(fila_st *p, Item e);
Item espia(fila_st *p);
Item desenfila(fila_st *p);

#endif // !FILA_H