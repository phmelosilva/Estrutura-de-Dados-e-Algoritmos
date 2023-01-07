#include <stdio.h>
#include <stdlib.h>

typedef int Item;
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

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    quicksortM3(nums, 0, n-1);

    for (int j = 0; j < n; j++)
    {
        printf("%d ", nums[j]);
    }

    return 0;
}

Item separa(Item *v, int l, int r)
{
    int p = v[r];
    int i = l-1;
    int j = r;

    for ( ; ; )
    {
        while (LESS(v[++i], p));
        while (LESS(p, v[--j])) if (j == l) break;
        if (i >= j) break;
        EXCH(v[i], v[j]);
    }
    EXCH(v[i], v[r]);
    return i;
}

void quicksortM3(Item *v, int l, int r)
{
    if (r <= l) return;

    CMPEXCH(v[(l+r)/2], v[r]);
    CMPEXCH(v[l], v[(l+r)/2]);
    CMPEXCH(v[r], v[(l+r)/2]);

    int j = separa(v, l, r);
    quicksortM3(v, l, j-1);
    quicksortM3(v,j+1, r);
}