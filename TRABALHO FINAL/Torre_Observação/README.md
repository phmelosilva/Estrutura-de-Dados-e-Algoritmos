# Torre de Observação
Uma jovem agrimensora oriunda dos Arais, a Daniela, está com um novo projeto para trabalhar com um terreno plano,
que com certeza não é um terreno do sudoeste do estado.

O terreno em questão faz parte de uma reserva ambiental, e os diretores desta reserva estão planejando abrir para visitação,
transformando em um parque. Embora a reserva possua um tamanho avantajado, não existem mirantes pois o terreno é
plano.

Para tentar melhorar o apelo visual do futuro parque, os diretores pretendem instalar torres de observação no terreno,
com diversos tamanhos.

Daniela já mediu e quadriculou todo o terreno espalhando os piquetes acompanhadas das estacas testemunhas e com isso
o terreno ficou discreto, parecendo uma matriz.

Neste ponto do projeto, devem decidir onde e qual altura deverá ser cada torre. Para ajudar no processo você foi contratado
para escrever um programa de computador que dado o terreno quadriculado e, um conjunto de torres e suas alturas,
determine quantas e quais áreas do terreno ficarão visíveis com o uso das torres.

As torres de altura H permitem a visualização em torno da torre. Por exemplo, a torre de altura 1 permite a visualização
para os 8 quadrados adjacentes, o de altura 2 permite a visualização para os 8 adjacentes mais os 16 adjacentes a estes 8.

Para facilitar a leitura do terreno, a carta possui uma matriz representando o terreno. Os campos com o caractere ‘#’
representam uma área que não se sabe se será possível ser visualizada por uma torre. O caractere ‘t’ representa uma torre.

A sua tarefa é, lido o mapa do terreno com as torres e posteriormente as alturas dessas torres, determinar quantas áreas
são visíveis com as torres e gerar a representação visual dessas áreas no terreno, trocando o caractere ‘#’ pelo caractere ‘.’
nas posições em que as torres permitem visualização.

Note que as áreas onde estão as torres não devem ser trocadas por pontos, e que as áreas das torres não entram na conta
de áreas visíveis e também que áreas de intersecção, i.e, aquela que podem ser visualizadas por múltiplas torres não
contam múltiplas vezes.

## Entrada
---
A entrada é composta por um único caso de teste. A primeira linha de um caso de teste possui 2 inteiros N e M
(3 ≤ N, M ≤ 10²
) representando, respectivamente, o número de linhas e o números de colunas do terreno. A seguir
existirão N linhas, cada uma contendo M caracteres representando uma área do terreno, os caracteres serão ‘#’ ou ‘t’.

Por fim, existirão mais T linhas, cada uma representando a altura (1 ≤ hi ≤ 100) da torre presente no mapa, cada linha
representa uma torre na ordem em que foram lidas.

## Saída
---
A saída é composta por diversas linhas. A primeira linha da saída possui um único número inteiro V , representando
quantas áreas são visíveis. E a seguir a representação do mapa com as áreas visíveis estando nas torres e as que continuam
não sendo visíveis, bem como as áreas em que ficam as torres.

## Exemplos
---

### Exemplo de entrada 1
---
    5 10
    ##########
    ##t####t##
    ##########
    ##t#######
    ##########
    1
    2
    1
### Saída para a entrada 1
---
    32
    #...#.....
    #.t.#..t..
    #...#.....
    #.t.#.....
    #...######

### Exemplo de entrada 2
---
    10 10
    #####t####
    #####t####
    #####t####
    #####t####
    #####t####
    #####t####
    #####t####
    #####t####
    #####t####
    #####t#### 
    1
    2
    3
    3
    2
    1
    1
    4
    3
    1
### Saída para a entrada 2
---
    74
    ##...t...#
    ##...t...#
    ##...t...#
    #....t....
    #....t....
    #....t....
    #....t....
    #....t....
    #....t....
    #....t....
### Exemplo de entrada 3
---
    5 10
    ##########
    ##t####t##
    ##########
    ##t#######
    ########## 
    2
    2
    1

### Saída para a entrada 3
---
    40
    ..........
    ..t....t..
    ..........
    ..t.......
    #...######

\textit{\rightline{Author: Bruno Ribas }}
3