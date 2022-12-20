# Números Malucos Únicos Reinseridos

Bruno Ribas

## Preâmbulo
---
Números Malucos Únicos Reinseridos, NMUR para os íntimos, é uma técnica de crescimento de elementos em um vetor com a adição de números malucos únicos.

Os Números Malucos Únicos, NMU, são números gerados a partir da soma de números adjacentes em um vetor ordenado, dois a dois, que não possui elementos repetidos.

Os NMUR, são, a inserção dos NMU de volta ao vetor de geração dos NMU, de forma que o vetor continue ordenado e sem repetição, em seguida são extraídos todos os elementos armazenados nos índices, iniciando de 0, pulando de 4 em 4 elementos.

Os elementos extraídos de uma NMUR são muito importantes e podem ser usadas para diversas coisas, desde a criação de um exercício sem sentido para uma prova, até a ideias de novos exercícios para outras avaliações! É algo realmente fantástico.

Prof. Ribas, convocou sua presença para implementar a criação de uma NMUR em diversos conjuntos de números gerados pelo seu novíssimo gerador de números malucos com repetição e sem ordem.

Não se assuste, o problema não é difícil, mas tente usar o mínimo de operações possíveis para não levar um Time Limit Exceeded (TLE) e tão pouco um Runtime Error (RE).

## Calculando a NMUR
---
A explicação acima pode parecer um pouco complicada, mas é um tanto quanto simples! Você apenas precisa tomar cuidado com a escolha dos algoritmos e a quantidade de vezes que vai executá-los.

## Gerando os números malucos
---
Primeiramente você recebe um conjunto de números;
Depois você deverá ser capaz de eliminar todos os números repetidos e ordená-los;
Se a quantidade de elementos restante não for um número par, adicione ao fim do vetor o número 1000000000 (1 bilhão);
Calcule a soma de todos os números adjacentes, ou seja, a soma dos números em [0,1],[2,3],[4,5]...

## Reinserindo os números
---
Para todos os números malucos que **não** estão presentes no vetor ordenado, insira os números malucos.
O vetor resultante deve estar ordenado e sem repetidos
Imprima na tela todos os números em índices de quatro em quatro, partindo do índice 0.
Também imprima a quantidade de elementos do vetor dos números
 malucos únicos reinseridos

## Entrada
---
A entrada é composta por um único caso de teste, que possui diversas linhas. A primeira linha do caso de teste é composta por um número inteiro N ( 0 < N < 2¹⁷). A seguir serão dadas N linhas, cada um contendo um inteiro x_i ( 0 <= x_i < 2³⁰ ).

    Note que cada número x_i cabe dentro de uma variável do tipo int.

## Saída
---
A saída é composta por diversas linhas. Você deverá imprimir 1/4 do vetor resultante, ou seja, os índices em {0,4,8,12,16...}. E por fim uma única linha contendo a palavra **Elementos**: seguido do número de elementos únicos do vetor resultante. Veja os exemplos abaixo para entender melhor o formato da saída

## Exemplos
---
### Exemplo de entrada
---
    4
    22136
    2752
    14516
    13915

### Saída para o exemplo acima
---
    2752
    22136
    Elementos: 6

### Explicação para o exemplo acima
---
No exemplo acima identificamos que os números geradores para o NMU são:

    2752 13915 14516 22136

Como temos uma quantidade par de elementos não precisamos fazer mais nada. E agora podemos gerar os dois NMU:

    2752+13915=16667
    14516+22136=36652

Como eles não coincidem com nenhum elemento do vetor de origem, eles podem ser reinseridos, ficando o vetor resultante:

    2752 13915 14516 16667 22136 36652

O vetor resultante possui 6 elementos e vamos imprimir os elementos nos índices 0 e 4, ficando com a saída descrita acima.

### Exemplo de entrada
---
    4
    22845
    22576
    582
    18819

### Saída para o exemplo acima
---
    582
    22845
    Elementos: 6

### Exemplo de entrada
---
    5
    1
    1
    2
    2
    3

### Saída para o exemplo acima
---
    1
    1000000003
    Elementos: 5

### Explicação para o exemplo acima
---
No exemplo acima os números geradores para o NMU são:

    1 2 3

Como o vetor resultante (ordenado e sem repetidos) ficou com número ímpar de elementos, adicionados 1bilhão ao fim, ficando:

    1 2 3 1000000000
Agora podemos calcular os NMU:

    1+2=3
    3+1000000000=1000000003
Como 3 já faz parte do vetor gerador de NMU ele não poderá fazer parte do NMUR, logo o vetor resultante é:

    1 2 3 1000000000 1000000003
O vetor resultante possui 5 elementos e vamos imprimir os elmentos nos índices 0 e 4, obtendo a saída esperada.

### Exemplo de entrada
---
    1
    5

### Saída para o exemplo acima
---
    5
    Elementos: 3

### Exemplo de entrada
---
    3
    1
    1
    1

### Saída para o exemplo acima
---
    1
    Elementos: 3

### Exemplo de entrada
---
    8
    10113
    19808
    31546
    26361
    12133
    3621
    8374
    12536

### Saída para o exemplo acima
---
    3621
    12133
    26361
    Elementos: 12

### Exemplo de entrada
---
    8
    21854
    4449
    27809
    12061
    4460
    15714
    21454
    22467

### Saída para o exemplo acima
---
    4449
    15714
    27775
    Elementos: 12

Author: Bruno Ribas