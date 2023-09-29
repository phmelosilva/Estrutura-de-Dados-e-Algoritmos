# Eleição U.R.S.A.L
---
A cada 4 anos o pacato país de Nlogônia passa por um processo importante. Os cidadãos escolhem quais serão os seus representantes nas maiores esferas governamentais do país e do mundo!

Para agilizar o processo de eleição, o país resolveu implantar um sofisticado sistema de votação chamado ‘U.R.S.A.L’ (Urna Realmente Segura Amparada Legalmente). Neste maravilhoso sistema os compatriotas podem escolher os seus candidatos preferidos apenas digitando o número e por fim pressionando a tecla “confirma”.

Para justificar o enorme valor gasto pela ‘U.R.S.A.L’ o Serviço de Eleição do País (SEdP) prometeu que o resultado sairia pouco depois dos términos das votações. O problema é que são tantos votos, mas tantos votos, que o sistema de contagem não consegue realizar a conta rapidamente.

A fim de cumprir o tempo previsto, o SEdP contatou você para implementar o programa que calcula o resultado da eleição.

Os eleitores podem escolher o seu candidato ( escolhendo um número correto), podem anular ou deixar o voto em branco (que é registrado com um código negativo).

Os eleitores votarão para 4 cargos distintos:

* O presidente possui apenas 2 dígitos, ex: 97

* O senador possui 3 dígitos e cada eleitor escolherá 2, ex: 973

* O dep.Fed possui 4 dígitos, ex: 9734

* O dep.Est possui 5 dígitos, ex: 97345

Critérios de vitória:

A vitória sempre será por maioria simples, pode não parecer mas, os cidadãos de Nlogônia tentam ser práticos.

A única exceção está para o presidente, que deve obter a maioria dos votos (51%) para garantir a vitória.

A maioria simples é computada somente para os votos válidos, ou seja, brancos e nulos não entram no totais de votos.

Um partido é identificado pelos 2 primeiros dígitos do código de um candidato.

A quantidade de candidatos por partido para cada cargo é no máximo o maior número de combinações dos números, desde que os dois primeiro dígitos não mudem.

Para a eleição serão eleitos:

* 1 presidente;

* S senadores;

* F dep.Fed e;

* E dep.Est.

## Entrada
---
A entrada é composta por um único caso de teste contendo diversas linhas.

A primeira linha de um caso de teste possui 3 números inteiros, sendo eles 1 <= S,F,E <= 2³¹, representando, respectivamente, a quantidade de Senadores, dep.Fed e dep.Est que devem ser eleitos.

As próximas linhas, do caso de teste, serão compostas por um único número, representando, o candidato escolhido por algum eleitor, ou um voto inválido (representado por um número negativo).

## Saída
---
A saída para o caso de teste será composta por diversas linhas. A primeira linha da saída deve conter dois números, o primeiro com a contagem de votos válidos totais (independente do cargo) e o segundo com a contagem de votos inválidos.

A segunda linha deverá conter o código do presidente eleito ou a frase Segundo Turno.

As próximas 3 linhas, possuem a lista dos candidatos eleitos para, respectivamente, Senador, dep.Fed e dep.Est. A listagem dos eleitos devem ser separadas por espaço e ordenadas pela quantidade de votos (do maior para o menor). Havendo empate, tem preferência o candidato de maior número.

## Exemplos
---
### Entrada
---
    1 2 2
    89
    89
    99
    123
    234
    123
    234
    234
    345
    1234
    2345
    3456
    12345
    23456
    23456
### Saída para a entrada acima
---
    15 0
    89
    234
    3456 2345
    23456 12345
### Entrada
---
    1 1 1
    333
    62
    33928
    33928
    33928
    -177
    2069
    -177
    33928
    -177
    333
    2069
    2069
    65
    333
    65
    333
    62
    -177
    2069
### Saída para a entrada acima
---
    16 4
    Segundo turno
    333
    2069
    33928
Author: Bruno Ribas