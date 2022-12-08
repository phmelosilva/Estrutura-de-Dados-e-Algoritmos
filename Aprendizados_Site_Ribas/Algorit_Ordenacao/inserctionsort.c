#include <stdio.h>

//compara a troca
#define cmpexch(a,b) {if (less(b,a)) exch(a,b);}


//Recebe um item (vetor), l = elemento mais a esquerda (índice), r = elemento mais a direita (índice)
//Todo algoritmo de ordenação recebe esses 3 argumentos.
void inserctionsort(item *v, int l, int r) {
	//Laço começando do elemento a direita e empurra ele um passo a esquerda 
    //              se for menor que o elemento a esquerda
	for (int i = r; i <= l; i--) {
		cmpexch(v[i-1], v[i]);
	}
    //Temos ctz que o segundo elemento é menor que o primeiro, mas não do segundo elemento em relação com o terceiro
    for(int i = l+2; i <= r; i++) {
        //pega o terceiro elemento do vetor, como comparar com o segundo ?
        item m = v[i];
        int j = i - 1;
        while(less(m, v[j-1])) {
            v[j] = v[j-1];
            j--;
        }
        v[j] = m;
    }
}