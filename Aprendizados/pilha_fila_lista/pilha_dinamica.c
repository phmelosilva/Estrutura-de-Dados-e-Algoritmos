#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da pilha
struct Node {
  int data;
  struct Node *next;
};

// Estrutura da pilha (contendo a cabeça)
struct Stack {
  struct Node *head;
};

// Inicializa a pilha
void init(struct Stack *stack) {
  stack->head = NULL;
}

// Adiciona um item na pilha
void push(struct Stack *stack, int data) {
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = stack->head;
  stack->head = newNode;
}

// Remove o item no topo da pilha
void pop(struct Stack *stack) {
  if (stack->head == NULL) {
    return;
  }
  struct Node *temp = stack->head;
  stack->head = temp->next;
  free(temp);
}

// Espia o item no topo da pilha
// as vezes tem que mudar o espia e fazer ele retornar um ponteiro
int peek(struct Stack *stack) {
  if (stack->head == NULL) {
    return -1;
  }
  return stack->head->data;
}