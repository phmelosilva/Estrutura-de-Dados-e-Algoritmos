#include <stdio.h>
int main(void)
{
  int a = 5, b = 7; //Inicializando variáveis
  int *c = &a; // inicializando ponteiro
  printf("Ponteiro c: %p\n", c);
  int **d = &c; //ponteiro pegando endereço do outro ponteiro
  **d = 8;  //atribui o valor para o qual o endereço de d aponta que é o endereço de c que aponta para a

// Todos os printfs abaixo precisam ter o mesmo valor, porque apontam pro mesmo lugar.
//   printf("Valor que d armazena: %d\n", **d);
//   printf("Valor que c armazena: %d\n", *c);
//   printf("Valor armazenado em a: %d\n", a);

  *d = &b; // referenciando b para d e consequentemente, mudando o endereço que o ponteiro c aponta!

// **d agora acessa o endereço que *c aponta que foi mudado para apontar para &b e por isso ambos valores são 7.
  printf("Valor que d armazena: %d\n", **d);
  printf("Valor que c armazena: %d\n", *c);
  printf("Valor armazenado em a: %d\n", a);
    printf("Valor armazenado em b: %d\n", b);

// valores dos endereços, perceba as correspondências de acordo com os ponteiros!
  printf("endereço de a: %p\n", a);
  printf("endereço de c: %p\n", c);
  printf("endereço de b: %p\n", b);
  printf("endereço de d: %p\n", d);
  return 0;
}