#include <stdio.h>

int main() {
    int depositos, n = 1, j, z, i, totalJ, totalZ, diferencas[100];
    do {
        scanf("%d", &depositos);
        totalJ = 0;
        totalZ = 0;
        for (i = 0; i < depositos; i++) {
            scanf("%d %d", &j, &z);
            totalJ+=j;
            totalZ+=z;
            diferencas[i] = totalJ-totalZ;
        }
        if (depositos == 0) {
            return 0;
        }
        printf("\n");
        printf("Teste %d\n", n);
        for (i = 0; i < depositos; i++) {
            printf("%d\n", diferencas[i]);
        }
        printf("\n");
        n++;
    } while (depositos!=0);
    return 0;
}