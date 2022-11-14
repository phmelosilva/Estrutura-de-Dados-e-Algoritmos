#include <stdio.h>

int main() {
    char buff[100];
    int l, i =0;
    l = getchar();
    while (l!=EOF && l!='\n') {
        buff[i] = l;
        i++;
        l = getchar();
    }
    buff[i]='\0';
    printf("%s\n", buff);
    return 0;
}   