#include <stdio.h>
#include <stdlib.h>

struct node {
  int e;
  struct node *prox;
};

struct pilha {
  struct node *inicio;
};

void push(struct pilha *p, int x) {
  struct node *novo = (struct node *) malloc(sizeof(struct node));
  novo->e = x;
  novo->prox = p->inicio;
  p->inicio = novo;
}

int pop(struct pilha *p) {
  if (p->inicio == NULL) {
    printf("Pilha vazia\n");
    exit(1);
  }

  int x = p->inicio->e;
  p->inicio = p->inicio->prox;
  return x;
}


void troca_topo(struct pilha *p) {
  struct node *topo = p->inicio->e;
  p->inicio->e = topo->prox;
  while (p->inicio->prox != NULL)
  {
    
  }
}

int main() {
  int n, i, x;
  struct pilha *p1 = (struct pilha *) malloc(sizeof(struct pilha));
  struct pilha *p2 = (struct pilha *) malloc(sizeof(struct pilha));
  p1->inicio = NULL;
  p2->inicio = NULL;

  scanf("%d", &n);
  for (i = n; i >= 1; i--) {
    push(p1, i);
  }

  printf("Cartas descartadas: ");
  while (p1->inicio != NULL && p1->inicio->prox != NULL) {
    x = pop(p1);
    printf("%d, ", x);
    push(p2, pop(p1));
  }

  printf("\nCarta restante: %d\n", pop(p1));
  return 0;
}
