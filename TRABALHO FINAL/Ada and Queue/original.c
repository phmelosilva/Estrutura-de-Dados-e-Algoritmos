#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    int valor;
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

void insereInicio(lista *l, int valor) {
    no *novo = malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = l->inicio;
    novo->anterior = NULL;

    if (l->inicio != NULL) {
        l->inicio->anterior = novo;
    }

    l->inicio = novo;
    l->size++;

    if (l->fim == NULL) {
        l->fim = novo;
    }
}

void insereFim(lista *l, int valor) {
    no *novo = malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = NULL;
    novo->anterior = l->fim;

    if (l->fim != NULL) {
        l->fim->proximo = novo;
    }

    l->fim = novo;
    l->size++;

    if (l->inicio == NULL) {
        l->inicio = novo;
    }
}

void removeInicio(lista *h) {
    no *toRemove = h->inicio;
    h->inicio = h->inicio->proximo;
	printf("%d\n", toRemove->valor);

	if (h->inicio == NULL)
    {
        h->fim = NULL;
    }

    h->size--;
}

void removeUltimo(lista *h) {
    no *toRemove = h->fim;
	printf("%d\n", toRemove->valor);
    h->fim = h->fim->anterior;
    if (h->fim != NULL)
    {
        h->fim->proximo = NULL;
    } else {
        h->inicio = NULL;
    }

	h->size--;
}

int main() {
    int queries, valor, controle_rev = 0;
    char comando[10];
    lista *queue = malloc(sizeof(lista));
    inicializaLista(queue);

    scanf("%d", &queries);
    for (int i = 0; i < queries; i++)
    {
        scanf("%s", comando);

        if (strcmp(comando, "reverse") == 0)
        {
            if (controle_rev == 0)
            {
                controle_rev = 1;
            } else {
                controle_rev = 0;
            }

        } else if (strcmp(comando, "push_back") == 0)
        {
            scanf("%d", &valor);
            if (controle_rev == 1) 
            {
                insereInicio(queue, valor);
            } else {
                insereFim(queue, valor);
            }
            
        } else if (strcmp(comando, "toFront") == 0)
        {
            scanf("%d", &valor);
            if (controle_rev == 1) 
            {
                insereFim(queue, valor);
            } else {
                insereInicio(queue, valor);
            }

        } else if (queue->size == 0) 
        {
            printf("No job for Ada?\n");
        }
        else if (strcmp(comando, "back") == 0)
        {
            if (controle_rev == 1)
            {
                removeInicio(queue);
            }else {
            	removeUltimo(queue);
            }
            // printf("%d\n", valor);

        } else if (strcmp(comando, "front") == 0)
        {
            if (controle_rev == 1)
            {
                removeUltimo(queue);
            } else {
                removeInicio(queue);
            }
            // printf("%d\n", valor);
        }
		getchar();
	}
    return 0;
}