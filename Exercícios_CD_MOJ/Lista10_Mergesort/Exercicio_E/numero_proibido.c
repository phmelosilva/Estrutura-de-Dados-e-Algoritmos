#include <stdio.h>
#include <stdlib.h>

typedef long int item;
#define LESS(A, B) (A < B)
#define LESSEQ(A, B) (A <= B)
#define EXCH(A, B)  \
    {               \
        typeof(A) T = A; \
        A = B;      \
        B = T;      \
    }
#define CMPEXCH(A, B)   \
    {                   \
        if (LESS(A.numero, B.numero)) \
            EXCH(A, B); \
    }

void merge(item *v, int l, int m, int r);
void mergesort(item *v, int l, int r);
int busca_binaria(item *v, int num, int l, int r);

int main() {
    long int n;
    scanf("%ld", &n);
    item pi[n];
    long int x;
    for (int i = 0; i < n; i++){
        scanf("%ld ", &x);
        pi[i] = x;
    }
    mergesort(&pi[0], 0, n-1);
    
    while (scanf("%ld", &x) != EOF)
    {
        int proibido = busca_binaria(&pi[0], x, 0, n);

        printf("%s\n", pi[proibido] == x ? "sim" : "nao");
    }
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

int busca_binaria(item *v, int num, int l, int r) {
     while(l + 1 < r){
        int mid = l + (r-l)/2;
        if(LESSEQ(v[mid], num)) l = mid;
        else r = mid;
    }
    return l;
    
    // if (l >= r) return;
    // int meio = (l+r)/2;
    
    // if (v[meio] == num)
    //     return meio;
    // if (num < v[meio])
    //     return busca_binaria(&v[0], num, l, meio-1);
    // if (num > v[meio])
    //     return busca_binaria(&v[0], num, meio+1, r);
}