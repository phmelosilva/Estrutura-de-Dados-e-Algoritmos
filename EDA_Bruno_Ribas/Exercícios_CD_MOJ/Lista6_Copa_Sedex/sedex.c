#include <stdio.h>

int main() {
    int diam, alt, larg, profu;
    scanf("%d", &diam);
    scanf("%d %d %d", &alt, &larg, &profu);
    if (alt >= diam && larg >= diam && profu >= diam) {
        printf("\n S");
    } else {
        printf("\n N");
    }
    return 0;
}