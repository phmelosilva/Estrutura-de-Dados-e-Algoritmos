#include <stdio.h>
#include <string.h>
// Função strstr() -> devolve um ponteiro com a 1° ocorrência da substring passada.
int maior_substring(char *str, char *substr) {
        if (strlen(str) < strlen(substr)) return 0;

        if (strlen(str) == strlen(substr)) 
        {
            if (strcmp(str, substr)) return strlen(str);

            return 0;
        }
        
        int len = strlen(substr);
        char first[len]; 
        for (int i = 0; i < len; i++) {
            first[i] = str[i];
        }
        printf("%s\n", first);
        char last[len];
        int tamanho_final = strlen(str);
        int j = len-1;
        for ( int i = tamanho_final; i > tamanho_final-len; i--) {
            printf("%d\n", i);
            last[j] = str[i-1];
            printf("%c\n", last[j]);
            j--;
        }
        printf("%s\n", last);
        // char last[101] = strncpy(str, str+len, strlen(str));
        if ((*first == *last) && (*last == *first)) 
            return strlen(str);
         
        if ((*first == *last) && (*last != *first)) 
            return maior_substring(str, strncpy(substr, str, (strlen(str)-1)));
        
        if ((*first != *last) && (*last == *first)) 
        {
            // printf("%s\n", first);
            // printf("%s\n", last);
            return maior_substring(strncpy(substr, str+1, strlen(str)), substr);
        }
  
    return maior_substring(strncpy(substr, str+1, strlen(str)), strncpy(substr, str, (strlen(str)-1)));
}

int main() {
    char str[101];
    char sub[101];
    scanf("%s", str);
    scanf("%s", sub);
    printf("%d\n", maior_substring(str, sub));
    return 0;
}