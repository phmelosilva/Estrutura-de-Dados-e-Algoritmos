#include <stdio.h>

typedef long int item;
#define key(A) (A) // key(A) (A.chave)
#define LESS(A,B) (key(A) < key(B))
//Troca a por b
#define EXCH(A,B) {item T = A; A = B; B = T;}
#define CMPEXCH(A, B) {if (LESS(B, A)) EXCH(A,B); }


int main() {
    long int i = 0;
    item n, m; 
    scanf("%ld %ld", &n, &m);
    item v1[n];
    item temp;
    // item v2[m], index[m];
    while (scanf("%ld", &v1[i]) != EOF && i < n)
    {
        i++;
    }
    for (i = 0; i < m; i++)
    {
        scanf("%ld", &temp);
        if (temp == v[i])
        {
            
        }
        
    }

    // for (int j = 0; j < m; j++)
    // {
    //     scanf("%ld", &v2[j]);
    //     if (v1[j] == v2[j])
    //         index[j] = j;
    //     else index[j] = -1;    
    // }

    // for (int k = 0; k < m; k++)
    //     printf("%ld\n", index[k]);
    
    return 0;
}
