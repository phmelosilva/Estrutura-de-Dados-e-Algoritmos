#include <stdio.h>
#include <string.h>

int main() {
    int total_triagens = 0, triagens_form = 0, sims = 0, i = 1;
    char formulario[11];
    while (scanf("%s", formulario) != EOF) {
        if (strcmp(formulario, "nao") || strcmp(formulario, "sim")) {

            if (strcmp(formulario, "sim") == 0) {
                sims++;
            }
            if (sims >= 2){
                    triagens_form=1;
                }
            if (i == 10) {
                total_triagens += triagens_form;
                triagens_form=0;
                i=0;
                sims = 0;
            }
            i++;
        }
    }
    printf("%d\n", total_triagens);
    return 0;
}