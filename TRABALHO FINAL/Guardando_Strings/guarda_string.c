#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Item char
#define MAX_STR_LEN (1 << 22)
typedef struct no 
{
  Item str[MAX_STR_LEN];
  int count;
  struct no *next;
} no;

typedef struct lista
{
	no *first;
	no *last;
	int size;
} lista;

int linked_list_constructor(lista *x)
{
	x->first = NULL;
	x->last = NULL;
	x->size = 0;
	return 1;
}

int linked_list_push_front(lista *x, char *i)
{
	// alloc memory to new node.
	no *new_node = malloc(sizeof(no));
	if(new_node == NULL) return 0;

	// new element to the new node.
	strcpy(new_node->str, i);

	// the first node now is the second and is pointed by the new one.
	new_node->next = x->first;

	// the new node now is the first one.
	x->first = new_node;

	// if is the first one he is also the last
	if(x->size == 0)
		x->last = new_node;

	++x->size;
	
	return 1;
}

int linked_list_pop_front(lista *x)
{
	// store a pointer to the second element.
	no *t = x->first->next;

	// store a pointer to the first element.
	no *f = x->first;	

	// now the first is the second.
	x->first = t;

	// as the first insn't used anymore free it.
	free(f);

	return 1;
}

int linked_list_push_back(lista *x, char *i)
{
	// store a pointer to the new node.
	no *t = malloc(sizeof(no));
	if(t == NULL) return 0;

	// store the value and set the next to null, it is the last element.
	strcpy(t->str, i);
	t->next = NULL;
	
	// the next of the current last is the new node.
	if (x->last->next != NULL)
	{
		x->last->next = t;
	}
	fprintf(stderr, "push_back()\n");

	// the new node becomes the last.
	x->last = t;

	return 1;
}

int KMP(const char* text, const char* pattern, int m, int n)
{
	int contador = 0;
	// caso base 1: o padrão é NULL ou vazio
	if (*pattern == '\0' || n == 0) {
        printf("The pattern occurs with shift 0");
    }
 
    // caso base 2: o texto é NULL ou o comprimento do texto é menor que o do padrão
    if (*text == '\0' || n > m) {
        printf("Pattern not found");
    }
 
    // next[i] armazena o índice da próxima melhor correspondência parcial
    int next[n + 1];
 
    for (int i = 0; i < n + 1; i++) {
        next[i] = 0;
    }
 
    for (int i = 1; i < n; i++)
    {
        int j = next[i + 1];
 
        while (j > 0 && pattern[j] != pattern[i]) {
            j = next[j];
        }
 
        if (j > 0 || pattern[j] == pattern[i]) {
            next[i + 1] = j + 1;
        }
    }
 
    for (int i = 0, j = 0; i < m; i++)
    {
        if (*(text + i) == *(pattern + j))
        {
            if (++j == n) {
				contador++;
				// printf("The pattern occurs with shift %d\n", i - j + 1);
			}
        }
        else if (j > 0)
        {
            j = next[j];
            i--;    // já que `i` será incrementado na próxima iteração
        }
    }
	return contador;
}

void contagem_str(no *percorre, lista *strings, char *ponteiro, int tam_s)
{
	if (percorre == NULL) return;
	int tam_texto = strlen(percorre->str);
	percorre->count = KMP(percorre->str, strings->first->str, tam_texto, tam_s);
	contagem_str(percorre->next, strings, ponteiro, tam_s);
	printf("%d\n", percorre->count);
}

int main() {
	char string[MAX_STR_LEN];
	lista *strings = malloc(sizeof(lista));
	linked_list_constructor(strings);

	while (scanf("%s", string) != EOF)
	{
		linked_list_push_front(strings, string);
	}

	no *percorre = strings->first->next;
	int tam_s = strlen(strings->first->str);
	char *ponteiro;

	contagem_str(percorre, strings, ponteiro, tam_s);

  return 0;
}