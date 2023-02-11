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

void printCount(lista *strings, char *string)
{
	no *tmp = strings->first;
	while (tmp->next != NULL)
	{
		if (strstr(tmp->str, string) != NULL)
		{
			tmp->count++;
		}
		tmp = tmp->next;
	}
	printf("%d\n", tmp->count);
}

int main() {
	char string[MAX_STR_LEN];
	lista *strings = malloc(sizeof(lista));
	linked_list_constructor(strings);

	while (scanf("%s", string) != EOF)
	{
		linked_list_push_front(strings, string);
	}
	printf("---------\n");
	no *percorre = strings->last;
	printf("%s", percorre->str);
	char *ponteiro;
	//printf("%s\n", strings->first->str);
	printf("---------\n");
	while (percorre != NULL)
	{
		// ponteiro = strstr(percorre->str, strings->first->str);
		// if (ponteiro)
		// {
		// 	percorre->count++;
		// }	

		// printf("%d", percorre->count);
		printf("%s\n", percorre->str);
		percorre = percorre->next;
		// printCount(strings, percorre->str);
	}
  

  // Verificando se está armazenando as strings
  //   while (temporario != NULL)
  //   {
  // 	printf("%s\n", temporario->str);
  // 	temporario = temporario->next;
  //   }

  return 0;
}