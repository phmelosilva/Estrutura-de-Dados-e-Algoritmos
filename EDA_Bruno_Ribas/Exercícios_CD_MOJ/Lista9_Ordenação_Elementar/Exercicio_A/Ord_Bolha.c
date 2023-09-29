#include <stdio.h>

typedef int item;
#define key(A) (A) // key(A) (A.chave)
#define LESS(A,B) (key(A) < key(B))
//Troca a por b
#define EXCH(A,B) {item T = A; A = B; B = T;}
#define CMPEXCH(A, B) {if (less(A, B)) EXCH(A,B); }

#define LESS(A,B) (A < B)
//Troca a por b
#define EXCH(A,B) \
{                 \
    int T = A;    \
    A = B;        \
    B = T;        \
}
#define CMPEXCH(A, B) if (less(B, A)){EXCH(A,B);}


void bubblesort(int *v, int l, int r) {
    
    for (int i = l; i < r; i++)
    {
        for (int j = l; j < r; j++)
        {
            if (LESS(v[j+1], v[j]))
            {
                EXCH(v[j+1], v[j]);
            } 
        }
    }
}

int main() {
    int i = 0, numeros[1001];

    while (scanf("%d", &numeros[i]) != EOF)
    {
        i++;
    }
    printf("\n");
    bubblesort(numeros, 0, i-1);
    for (int i2 = 0; i2 < i; i2++) {
        printf("%d ", numeros[i2]);
    }
    return 0;
}
