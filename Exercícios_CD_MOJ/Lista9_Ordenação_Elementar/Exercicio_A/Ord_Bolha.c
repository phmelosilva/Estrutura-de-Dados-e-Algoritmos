#include <stdio.h>

typedef int item;
#define key(A) (A) // key(A) (A.chave)
#define LESS(A,B) (key(A) < key(B))
//Troca a por b
#define EXCH(A, B) {item T = A; A = B; B = T;}
#define CMPEXCH(A, B) {if (LESS(B, A) EXCH(A,B));}


void bubblesort(int *v, int l, int r) {
    
    for (int i = l; i < r; i++)
    {
        for (int j = l; j < r; j++)
        {
            if (LESS(v[j], v[j+1]))
            {
                EXCH(v[j], v[j+1]);
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
    bubblesort(numeros, 0, i);
    printf("--------\n");
    for (int i2 = 0; i2 < i; i2++) {
        printf("%d\n", numeros[i2]);
    }
    return 0;
}
