#include <stdio.h>

int main() {
    int n, ri, i;
    int x = 0;
    int y = 0;
    do {
        scanf("%d", &n);
            if (n!=0) {
                for (i = 0; i < n; i++) {
                    scanf("%d", &ri);
                    (ri == 0) ? x++ : y++;
                }
            }
            if (n == 0) {
                return 0;
            }
        printf("Alice ganhou %d e Beto ganhou %d\n", x,y);
        x = 0;
        y = 0;
    } while (n!=0); 
    return 0;
}