#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN (1 << 22)

typedef struct Node {
  char str[MAX_STR_LEN];
  int count;
  struct Node *prox;
} Node;

Node *cabeca = NULL;

Node *busca_string(char *str) {
    Node *cur = head;
    while (cur != NULL) {
    if (strcmp(cur->str, str) == 0) {
      return cur;
    }
    cur = cur->next;
    }
    return NULL;
}

void add_string(char *str) {
    Node *nova = malloc(sizeof())
}

int main() {
  char string[MAX_STR_LEN];
  Node *ultimo = NULL;

  while (scanf("%s", string) != EOF)
  {
      add_string(string);
      ultimo = busca_string(str);
  }

    return 0;
}