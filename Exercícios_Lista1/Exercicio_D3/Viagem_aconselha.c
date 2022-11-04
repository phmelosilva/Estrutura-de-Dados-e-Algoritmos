#include <stdio.h>

int main() {
    int i, quantidade_restaurantes, dia_viagem = 1, codigo_restaurante_atual, restaurante_com_nota_atual, restaurante_com_maior_nota, codigo_restaurante_maior_nota;
    
    while (scanf("%d", &quantidade_restaurantes) != EOF) {
        codigo_restaurante_atual = -1;
        codigo_restaurante_maior_nota = -1;
        restaurante_com_maior_nota = -1;
        restaurante_com_nota_atual = -1;

        for (i=0; i < quantidade_restaurantes; i++) {
            scanf("%d %d", &codigo_restaurante_atual, &restaurante_com_nota_atual);
            if (restaurante_com_nota_atual > restaurante_com_maior_nota) {
                restaurante_com_maior_nota = restaurante_com_nota_atual;
                codigo_restaurante_maior_nota = codigo_restaurante_atual;
            } else if (codigo_restaurante_atual < codigo_restaurante_maior_nota && restaurante_com_nota_atual == restaurante_com_maior_nota) {
                codigo_restaurante_maior_nota = codigo_restaurante_atual;
            } 
             // Preciso pegar os códigos e notas atuais, e comparar eles em variáveis que compara as notas.
        }
        printf("Dia %d\n%d\n\n", dia_viagem, codigo_restaurante_maior_nota);
        dia_viagem++;
    }
    return 0;
}