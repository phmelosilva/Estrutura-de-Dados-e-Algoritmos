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
        if (LESS(A.codigo, B.codigo)) \
            EXCH(A, B); \
    }

typedef struct
{
    int codigo;
    char palavra[15];
} instrucao;

char *busca_binaria(int code, instrucao *instrucoes, int pos, int r);
void inserctionsort(instrucao *v, int l, int r);

int main()
{
    item n, code;
    scanf("%d", &n);
    instrucao instrucoes[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &instrucoes[i].codigo, instrucoes[i].palavra);
    }

    inserctionsort(instrucoes, 0, n - 1);

    while (scanf("%d", &code) != EOF)
    {
        char *res;
        res = malloc(sizeof(char) * 16);
        res = busca_binaria(code, instrucoes, 0, n - 1);
        printf("%s\n", res);
    }
    return 0;
}

void inserctionsort(instrucao *v, int l, int r)
{
    for (int i = r; i > l; i--)
    {
        CMPEXCH(v[i], v[i - 1]);
    }
    for (int i = l + 2; i <= r; i++)
    {
        int j = i;
        instrucao tmp = v[j];
        while (LESS(tmp.codigo, v[j - 1].codigo))
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = tmp;
    }
}

char *busca_binaria(int code, instrucao *instrucoes, int pos, int r)
{
    // Momento em que a busca está apontando para uma posição que não existe no vetor.
    if (pos > r)
        return "undefined";

    int meio = (pos + r) / 2;

    if (code == instrucoes[meio].codigo)
        return instrucoes[meio].palavra;

    if (code < instrucoes[meio].codigo)
        return busca_binaria(code, instrucoes, pos, meio - 1);

    if (code > instrucoes[meio].codigo)
        return busca_binaria(code, instrucoes, meio + 1, r);
    // if (code == instrucoes[pos].codigo)
    // {
    //     return instrucoes[pos].palavra;
    // }

    // if (pos == r)
    //     return "undefined";
    // return busca_binaria(code, instrucoes, pos+1, r);
}
