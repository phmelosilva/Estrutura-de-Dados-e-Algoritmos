#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Item char
#define MAX_STR_LEN (1 << 22)

typedef struct no {
    Item str[MAX_STR_LEN];
    int count;
    struct no *proximo;
    struct no *anterior;
} no;

typedef struct lista {
    no *inicio;
    no *fim;
	int size;
} lista;

void inicializaLista(lista *l) {
    l->inicio = NULL;
    l->fim = NULL;
	l->size = 0;
}

void insereInicio(lista *l, char *valor) {
    no *novo = malloc(sizeof(no));
    strcpy(novo->str, valor);
    novo->proximo = l->inicio;
    novo->anterior = NULL;

    if (l->inicio != NULL) {
        l->inicio->anterior = novo;
    }

    l->inicio = novo;

    if (l->fim == NULL) {
        l->fim = novo;
    }
}

void insereFim(lista *l, char *valor) {
    no *novo = malloc(sizeof(no));
    strcpy(novo->str, valor);
    novo->proximo = NULL;
    novo->anterior = l->fim;

    if (l->fim != NULL) {
        l->fim->proximo = novo;
    }

    l->fim = novo;

    if (l->inicio == NULL) {
        l->inicio = novo;
    }
}


void printCount(lista *strings, char *string)
{
	no *tmp = strings->inicio;
	while (tmp->proximo != NULL)
	{
		if (strstr(tmp->str, string) != NULL)
		{
			tmp->count++;
		}
		tmp = tmp->proximo;
	}
	printf("%d\n", tmp->count);
}

int main() {
	char string[MAX_STR_LEN];
	char *ponteiro;
	lista *strings = malloc(sizeof(lista));
	inicializaLista(strings);

	while (scanf("%s", string) != EOF)
	{
		insereInicio(strings, string);
	}

	no *percorre = strings->fim;
	
	// printf("%s\n", strings->inicio->str);
	printf("---------\n");
	while (percorre != NULL)
	{
		// ponteiro = strstr(percorre->str, strings->inicio->str);
		// if (ponteiro)
		// {
		// 	percorre->count++;
		// }	

		// printf("%d", percorre->count);
		printf("%s\n", percorre->str);
		percorre = percorre->anterior;
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