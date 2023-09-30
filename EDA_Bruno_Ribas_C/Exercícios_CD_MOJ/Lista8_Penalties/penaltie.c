#include <stdio.h>
#include <string.h>

int main() {
    int cobrancas, gols_A = 0, gols_B = 0;
    char *cobrancas_time_A, *cobrancas_time_B;
    int cobrancas_feitas = 0, tentativas_A, tentativas_B;

    scanf("%d", &cobrancas);
    cobrancas_time_A = malloc((cobrancas * sizeof(char)) +1);
    cobrancas_time_B = malloc((cobrancas * sizeof(char)) +1);
    tentativas_A = cobrancas;
    tentativas_B = cobrancas;
    scanf("%s", cobrancas_time_A);
    scanf("%s", cobrancas_time_B);

    for (int i = 0; i < cobrancas; i++) 
    {
        cobrancas_feitas++;
        if (cobrancas_time_A[i] == 'o')
        {
            gols_A++;
        }
        tentativas_A--;
        if (gols_A + tentativas_A < gols_B || gols_B + tentativas_B < gols_A)
        {
            break;
        }
        
        cobrancas_feitas++;
        if (cobrancas_time_B[i] == 'o')
        {
            gols_B++;
        }
        tentativas_B--;

        if (gols_A + tentativas_A < gols_B || gols_B + tentativas_B < gols_A)
        {
            break;
        }
    }

    if (gols_A == gols_B)
    {
        printf("Empate\n");
    } else 
    {
        printf("%d\n", cobrancas_feitas);
    }

    return 0;
}