int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5}; // vetor de float que está recebendo 5 valores
  float *f; // criação de um ponteiro de float
  int i; // variável contadora
  f = vet; // ponteiro apontando para o vetor vet a partir de vet[0]
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
    printf("i = %d",i); 
    printf("   vet[%d] = %.1f",i, vet[i]); // printa o valor de cada vet[i] com 1 ponto flutuante
    printf("   *(f + %d) = %.1f",i, *(f+i)); // printa o valor que o ponteiro f aponta, no caso é o mesmo de vet[i]
    printf("   &vet[%d] = %X",i, &vet[i]); // printa o endereço de memória do vet[i] em questão
    printf("   (f + %d) = %X\n",i, f+i); // printa o endereço que o ponteiro f armazena
  }
  return 0;
}