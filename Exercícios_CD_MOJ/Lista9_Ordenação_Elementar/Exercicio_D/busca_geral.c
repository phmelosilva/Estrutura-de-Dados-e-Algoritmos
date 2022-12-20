#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int item;
#define LESS(A, B) (A < B)
#define EXCH(A, B)  \
    {               \
        typeof(A) T = A; \
        A = B;      \
        B = T;      \
    }
#define CMPEXCH(A, B)   \
    {                   \
        if (LESS(A.numero, B.numero)) \
            EXCH(A, B); \
    }

typedef struct
{
    int numero;
    int indice;
} dados;


int *busca_binaria(int num, dados *v, int l, int r);
void inserctionsort(dados *v, int l, int r);

int main() {
    item n, m, procurado; 
    scanf("%d %d", &n, &m);
    dados v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i].numero);
        v[i].indice = i;
    }

    inserctionsort(v, 0, n-1);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &procurado);
        int *res;
        res = malloc(sizeof(int)*4);
        res = busca_binaria(procurado, v, 0, n-1);
        printf("%d\n", res);
    }
    return 0;
}

void inserctionsort(dados *v, int l, int r)
{
    for (int i = r; i > l; i--)
    {
        CMPEXCH(v[i], v[i - 1]);
    }
    for (int i = l + 2; i <= r; i++)
    {
        int j = i;
        dados tmp = v[j];
        while (LESS(tmp.numero, v[j - 1].numero))
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = tmp;
    }
}

int *busca_binaria(int num, dados *v, int l, int r)
{
    // Momento em que a busca está apontando para uma posição que não existe no vetor.
    if (l > r)
        return -1;

    int meio = (l + r) / 2;

    if (num == v[meio].numero)
        return v[meio].indice;

    if (num < v[meio].numero)
        return busca_binaria(num, v, l, meio - 1);

    if (num > v[meio].numero)
        return busca_binaria(num, v, meio + 1, r);
}