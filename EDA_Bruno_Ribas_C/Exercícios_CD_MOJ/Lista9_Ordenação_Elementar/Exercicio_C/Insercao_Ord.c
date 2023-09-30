#include <stdio.h>

typedef long int item;
#define key(A) (A) // key(A) (A.chave)
#define LESS(A,B) (key(A) < key(B))
//Troca A por B
#define EXCH(A,B) {item T = A; A = B; B = T;}
#define CMPEXCH(A, B) {if (LESS(A, B)) EXCH(A,B); }

void inserctionsort(item *v, int l, int r) {
    // for (int i = l+1; i <= r; i++)
    // {
    //     for (int j = i; j > l; j--)
    //         CMPEXCH(v[j-1], v[j]);
    // }

    for (int i = r; i > l; i--)
    {
        CMPEXCH(v[i], v[i-1]);
    }
    for (int i = l+2; i <= r; i++)
    {
        int j = i;
        item tmp = v[j];
        while(LESS(tmp, v[j-1]))
        {
            v[j] = v[j-1];
            j--;
        }
        v[j] = tmp;
    }
}

int main() {
    int i = 0;
    item numeros[50000];

    while (scanf("%ld", &numeros[i]) != EOF)
        i++;
    
    printf("\n");
    inserctionsort(numeros, 0, i-1);
    for (int i2 = 0; i2 < i; i2++) 
    {
        printf("%ld", numeros[i2]);
        if (i2 + 1 < i) printf(" ");
    }
    printf("\n");
    return 0;
}
