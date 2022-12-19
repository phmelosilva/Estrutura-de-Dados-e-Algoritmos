#include <stdio.h>

typedef int item;
#define key(A) (A) // key(A) (A.chave)
#define LESS(A,B) (key(A) < key(B))
//Troca a por b
#define EXCH(A,B) {item T = A; A = B; B = T;}
#define CMPEXCH(A, B) {if (LESS(B, A)) EXCH(A,B); }

void selectionsort(int *v, int l, int r) {
    
    // for (int i = l; i < r; i++)
    // {
    //     int min = i;
    //     for (int j = i+1; j <= r; j++)
    //     {
    //         if (LESS(v[min], v[j]))
    //         {
    //             min = j;
    //         }
    //         EXCH(v[j], v[min]);
    //     }
    // }
    if (l == r) return;
	int min = l;
	for (int j = l+1; j <= r; j++) 
	{
		if (LESS(v[j], v[min]))
			min = j;
	}
	EXCH(v[min], v[l]);
	selectionsort(v, l+1, r);
}

int main() {
    int i = 0, numeros[1001];

    while (scanf("%d", &numeros[i]) != EOF)
    {
        i++;
    }
    printf("\n");
    selectionsort(numeros, 0, i-1);
    for (int i2 = 0; i2 < i; i2++) {
        printf("%d ", numeros[i2]);
    }
    return 0;
}
