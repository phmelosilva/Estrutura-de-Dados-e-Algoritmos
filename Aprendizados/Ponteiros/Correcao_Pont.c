#include <stdio.h>
int main(void)
{
  int x, *p, **q;
  p = &x; // ponteiro p recebendo o endereço da variável x
  q = &p; // ponteiro q recebendo endereço do ponteiro p
  x = 10; // adicionando o valor 10 na variável x
//   printf("%d\n", &q); -> O Erro da questão é que este printf está imprimindo o endereço do ponteiro e não o valor de x
printf("%d\n", **q); //para imprimir é precisamos referenciar o valor usando **, o primeiro * para pegar o valor que q aponta 
                   // e o segundo * para pegar o valor que p está apontando, que neste caso é o x = 10.
  return 0;
}