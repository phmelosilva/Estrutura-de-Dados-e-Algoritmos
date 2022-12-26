#include <stdio.h>
#include <stdlib.h>

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
        if (LESS(A, B)) \
            EXCH(A, B); \
    }

void merge(item *v, int l, int m, int r);
void mergesort(int *v, int l, int r);

int main() {
    int nums[100000];
    int i = 0;
    while (scanf("%d", &nums[i]) != EOF)
    {
        i++;
    }
    mergesort(nums, 0, i-1);
    for (int j = 0; j < i; j++)
        printf("%d ", nums[j]);

    return 0;
}

void merge(item *v, int l, int m, int r) {
    item *v2 = malloc(sizeof(int)*(r-l+1));
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
    free(v2);
}

void mergesort(int *v, int l, int r) {
    if (l >= r) return;
    int meio = (r+l)/2;
    mergesort(v, l, meio);
    mergesort(v, meio+1, r);
    merge(v, l, meio, r);
}