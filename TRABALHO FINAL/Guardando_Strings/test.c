#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN (1 << 22)

typedef struct Node {
  char str[MAX_STR_LEN];
  int count;
  struct Node *next;
} Node;

Node *head = NULL;

Node *find_string(const char *str) {
  Node *cur = head;
  while (cur != NULL) {
    if (strcmp(cur->str, str) == 0) {
      return cur;
    }
    cur = cur->next;
  }
  return NULL;
}

void add_string(const char *str) {
  Node *node = find_string(str);
  if (node == NULL) {
    node = (Node *) malloc(sizeof(Node));
    strcpy(node->str, str);
    node->count = 1;
    node->next = head;
    head = node;
  } else {
    node->count++;
  }
}

int main(void) {
  char str[MAX_STR_LEN];
  Node *last = NULL;
  while (scanf("%s", str) != EOF) {
    add_string(str);
    last = find_string(str);
  }
  Node *cur = head;
  while (cur != NULL) {
    if (cur == last) {
      printf("%d\n", cur->count - 1);
    } else {
      printf("%d\n", cur->count);
    }
    cur = cur->next;
  }
  return 0;
}
