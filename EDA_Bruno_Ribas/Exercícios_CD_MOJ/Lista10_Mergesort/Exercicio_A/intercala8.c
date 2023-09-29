#include <stdio.h>
#include <stdlib.h>

typedef long int item;
#define LESS(A, B) (A < B)
#define EXCH(A, B)  \
    {               \
        typeof(A) T = A; \
        A = B;      \
        B = T;      \
    }
#define CMPEXCH(A, B)   \
    {                   \
        if (LESS(A, B)) \
            EXCH(A, B); \
    }


item fans[16*(int)1e5+(int)6.66];
int N;
void merge(item *v, int l, int m, int r);

int main() {
    // int S_i;
    // item N_s[S_i];
    // for (int i = 0; i < 8; i++)
    // {
    //     scanf("%d", &S_i);
    //     if (S_i == 0) continue;
    //     for (int j = 0; j < S_i; j++)
    //     {
    //         scanf("%d ", N_s[j]);
    //     }
    //     merge(&N_s[0], 0, (S_i+0) / 2, S_i - 1);
    // }
    int n;
    N = 0;
    int x = 0;
    while(scanf("%d", &n) != EOF){
        if(n==0) continue;
        for(int i = 0; i < n; ++i) scanf("%ld", &fans[i+N]);
        
        merge(&fans[0], 0, N-1, N+n-1);

        N += n;
    }

    printf("%ld", fans[0]);
    for(int i = 1; i < N; ++i)
        printf(" %ld", fans[i]);
    printf("\n");

    return 0;
}

void merge(item *v, int l, int m, int r) {
    item v2[r-l+1];
    int k = 0;
    int i = l;
    int j = m+1;

    while (i <= m && j <= r)
    {
        if (LESS(v[i], v[j]))
        {
            v2[k++] = v[i++];
        }
        else 
        {
            v2[k++] = v[j++];
        }   
    }

    while ( i <= m )
    {
        v2[k++] = v[i++];
    }
        
    while ( j <= r)
    {
        v2[k++] = v[j++];
    }
       
    k = 0;
    for (int i2 = l; i2 <= r; i2++)
    {
        v[i2] = v2[k++];
    }
}