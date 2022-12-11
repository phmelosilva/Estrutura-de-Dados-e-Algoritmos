#include <stdio.h>
#include <string.h>

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
        strncpy(last, str+(strlen(str)-len), len);
        last[strlen(str)+1] = '\0';
        // int tamanho_final = strlen(str);
        // int j = 0;
        // for ( int i = strlen(str)-len; i = strlen(str); i++) {
        //     printf("%d\n", i);
        //     last[j] = str[i];
        //     j++;
        // }
        // for ( int i = tamanho_final; i > tamanho_final-len; i--) {
        //     printf("%d\n", i);
        //     last[j] = str[i-1];
        //     printf("%c\n", last[j]);
        //     j--;
        // }

        printf("%s\n", last);
        char nova_str[101];
        if ((strcmp(first, substr) == 0) && (strcmp(last, substr) == 0)) 
            return strlen(str);
         
        if ((strcmp(first, substr) == 0) && (strcmp(last, substr) != 0)) 
            return maior_substring(strncpy(nova_str, str, strlen(str)-1), substr);
        
        if ((strcmp(first, substr) != 0) && (strcmp(last, substr) == 0)) 
            return maior_substring(strncpy(nova_str, str+1, strlen(str)), substr);
  
        return maior_substring(strncpy(nova_str, str+1, strlen(str)-1), substr);
}

int main() {
    char str[101];
    char sub[101];
    scanf("%s", str);
    scanf("%s", sub);
    printf("%d\n", maior_substring(str, sub));
    return 0;
}