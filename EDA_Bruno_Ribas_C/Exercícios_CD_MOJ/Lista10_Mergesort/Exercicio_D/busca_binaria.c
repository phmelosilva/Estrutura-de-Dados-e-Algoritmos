#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *busca_binaria(int num, int *v, int l, int r);

int main() {
    int n,m, procurado;
    scanf("%d %d", &n, &m);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &procurado);
        int *res;
        res = malloc(sizeof(int)*4);
        res = busca_binaria(procurado, v, 0, n-1);
        printf("%d\n", res);

    }
    return 0;
}

int *busca_binaria(int num, int *v, int l, int r)
{

    int meio = (l+r)/2;

    if (l > r && num > v[meio]) 
        return r+1;

    if (l > r && num < v[meio]) 
        return 0;

    if (num == v[meio]) 
        return meio;

    if (num < v[meio]) 
        return busca_binaria(num, v, l, meio-1);

    if (num > v[meio]) 
        return busca_binaria(num, v, meio+1, r);
}