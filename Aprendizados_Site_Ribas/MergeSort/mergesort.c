#include <stdio.h>

typedef item int;

// Função 
void merge(item *n, int l, int m, int r) {
    // m é o índice do elemento do meio, para dividir o vetor em dois.
    int ia = l, int ib = m+1;

    // aux vai do índice 0 ao último na junção dos vetores
    item *aux = malloc(sizeof(item)*(r-l+1));
    int iaux = 0;
    // Usamos while para preencher o vetor auxiliar
    while (ia <= m && ib <= r)
    {   // iaux++, ib++ e ia++ é para salvarmos o valor e já ir para o próximo índice
        if (less(v[ib], v[ia])) 
            aux[iaux++] = v[ib++];
        else 
            aux[iaux++] = v[ia++];
    }

    while (ia <= m) 
    {
        aux[iaux++] = v[ia++];
    }

    while (ib <= r)
    {
        aux[iaux++] = v[ib++];
    }

    for (int i = 0; i < r-l+1; i++)
    {
        v[l++] = aux[i];
    }
}

// Função de ordenação
void mergesort(item *v, int l, int r) {
    int m = (r+l)/2;

    //Critério de parada
    if (r-l == 0) return;

    //As duas metades ordenadas:
    mergesort(v, l, m);
    mergesort(v, m+1, r);

    //Juntar os vetores ordenados parciais
    merge(v, l, m, r);
}

// Teste do mergesort
int main() {
    int vetor = {3, 15, 4, 3, 7, 8, 20, 0, 14, 7};
    // Tá dando erro aqui
    mergesort(vetor, 0, 9);
    /*
        //Execução:
        m = 4;
        mergesort(vetor, 0, 4);
        mergesort(vetor, 5, 9);
    */

    return 0;
}