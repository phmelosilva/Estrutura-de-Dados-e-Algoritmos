#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int i;
    int p;
    char c;
} item;

// #define LESS(A, B) (A < B)
// #define LESSEQ(A, B) (A <= B)
// #define EXCH(A, B)  \
//     {               \
//         typeof(A) T = A; \
//         A = B;      \
//         B = T;      \
//     }
// #define CMPEXCH(A, B)   \
//     {                   \
//         if (LESS(A, B)) \
//             EXCH(A, B); \
//     }

int LESS(item a, item b);
int LESS(item a, item b){
    return a.i == b.i ? a.p < b.p : a.i >= b.i;
}

char S[(int)1e5 + 666];


void merge(item *v, int l, int m, int r);
void mergesort(item *v, int l, int r);

int main() {
    scanf("%s", S);
    int n = strlen(S);

    char atual = S[0];
    int p = 0;
    item v[(int)1e5+666];
    int n_v = 0;

    for (int i = 0; i < n; i++)
    {
        if(atual != S[i]){
            v[n_v].i = i-p;
            v[n_v].c = atual;
            v[n_v].p = p;
            n_v++;
            p = i;
            atual = S[p];
        }
        
        if(i == n-1){
            v[n_v].i = i-p+1;
            v[n_v].c = atual;
            v[n_v].p = p;
            n_v++;
        }  
    }

    mergesort(v, 0, n_v-1);
    for(int i = 0; i < n_v; ++i)
        printf("%d %c %d\n", v[i].i, v[i].c, v[i].p);
    

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

void mergesort(item *v, int l, int r) {
    if (l >= r) return;
    int meio = (r+l)/2;
    mergesort(v, l, meio);
    mergesort(v, meio+1, r);
    merge(v, l, meio, r);
}