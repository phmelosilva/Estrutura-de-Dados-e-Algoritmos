# Estrutura de Dados e Algoritmos - UnB FGA
O objetivo deste repositório é de armazenar conteúdos, códigos, exercícios e trabalhos referente a matéria de Estrutura de Dados e Algoritmos do 4° Semestre do curso de Engenharia de Software da Universidade de Brasília, sendo referente ao meu desempenho.

Além disso, o repositório também visa contar com o conhecimento de Estrutura de Dados e Algoritmos em outras linguagens que eu venha precisar estudar, já que a disciplina foi realizada com o uso da Linguagem C. Portanto, também será possível encontrar códigos em linguagens como Python.

## Dica para execução dos códigos
Foi usado para executar os códigos de uma forma mais prática o executor com valgrind, no qual descreve a execução do código. Para isso, execute os seguintes comandos no terminal do código em questão:

1. Execute:

		gcc -o exec codigo.c

2. Em seguida, execute o comando:

		./exec

3. Ou este outro comando para executar o valgrind

		valgrind ./exec

## Facilitação para Inputs
Primeiro deve-se criar um arquivo input.txt onde deve ser inserido as entradas de exemplo do exercício. Após isso, salve o arquivo e execute o código C utilizando no terminal:

	gcc -o codigo codigo.c

Após isso execute no terminal, considerando que "codigo" é o executável criado:

	./codigo < input.txt
