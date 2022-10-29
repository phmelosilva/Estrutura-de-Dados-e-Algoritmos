#include <stdio.h>

int main() {
    int ns, nums[ns], i, soma;
    scanf("%d", &ns);
    for (i = 0; i < ns; i++) {
        scanf("%d", &nums[i]);
        soma += nums[i];
    }
    printf("%d\n", soma);
    return 0;
}