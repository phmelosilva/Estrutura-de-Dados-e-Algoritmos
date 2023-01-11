#include <stdio.h>
#include <stdlib.h>

typedef int Item;
#define LESS(A, B) (A < B)
#define EXCH(A, B)  \
    {               \
        typeof(A) T = A; \
        A = B;      \
        B = T;      \
    }
#define CMPEXCH(A, B)   \
    {                   \
        if (LESS(B, A)) \
            EXCH(A, B); \
    }

Item separa(Item *v, int size)
{
    int l = -1, r = size - 1;
    Item p = v[r];
    
    for (;;)
    {
        while (LESS(v[++l], p));
        while (LESS(p, v[--r]) && r > l); 
        if (l >= r)
            break;
        EXCH(v[l], v[r]);
    }
    EXCH(v[l], v[size - 1]);
    return l;
}

void quicksort(Item *v, int size)
{
    if (size < 2) 
        return;

    EXCH(v[(size - 1)/2], v[size-2]);
    CMPEXCH(v[0], v[size-2]);
    CMPEXCH(v[0], v[size-1]);
    CMPEXCH(v[size-2], v[size-1]);

    int j = separa(v, size - 1);
    quicksort(v, j);
    quicksort(v + j + 1, size - j - 1);
}

int main() {
    int n;
    Item *vetor;
    scanf("%d", &n);
    vetor = malloc(sizeof(Item)*n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    quicksort(vetor, n);

    for (int j = 0; j < n; j++)
    {
        printf("%d ", vetor[j]);
    }
    printf("\n");

    return 0;
}