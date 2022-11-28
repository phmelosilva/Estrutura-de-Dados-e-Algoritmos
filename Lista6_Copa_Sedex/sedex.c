#include <stdio.h>

int main() {
    int diam, alt, larg, profu;
    int pi = 3;
    scanf("%d", &diam);
    scanf("%d %d %d", &alt, &larg, &profu);
    // Volume esfera = (4/3)*pi*(r³)
    // Volume caixa = alt*larg*profu
    int raio = diam/2;
    float vol_bola = 4*3.14*raio*raio*raio/3;
    int vol_caixa =  alt*larg*profu;
    if (vol_bola > vol_caixa) {
        return printf("\n N");
    } else {
        return printf("\n S");
    }
    return 0;
}