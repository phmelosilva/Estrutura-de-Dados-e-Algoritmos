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

void merge(int *v, int l, int m, int r);

int main() {
    int S_i;
    int N_s[S_i];

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &S_i);
        for (int j = 0; j < S_i; j++)
        {
            scanf("%d ", N_s[j]);
        }
        merge(N_s, 0, (S_i+0) / 2, S_i - 1);
    }
    


    return 0;
}

void merge(int *v, int l, int r)
{
    
}