# Menores Placas

## Preâmbulo
---
Joãozinho adora ler os números das placas dos carros, e a cada placa que lê grita no carro, assustando a todos, o número
que leu.
Claro, Joãozinho faz isso durante as viagens em família. Ultimamente a família pega o carro e dirige sem rumo por horas
a fio, pois não podem passear em shoppings, e a diversão foi colocar todo mundo no carro e viajar pelas estradas do país.
Leônidas, o pai de Joãozinho, resolveu desafiar seu filho. Toda vez que ele ler uma placa deveria anotar, e não gritar, e de
vez em quando o pai iria perguntar quais eram as N menores placas lidas até o momento.
Essa brincadeira ficou tão popular na família que todos começaram a prestar atenção nas placas e começaram a "trucar"
as repostas de Joãozinho.
Para garantir que Joãozinho não esteja trapaceando, Leônidas pediu a você que implementasse um programa de computador
que responda os valores corretamente. As placas serão inseridas por Gertrudes, mãe de Joãozinho.

## Entrada
---
A entrada é composta por um único caso de testes com diversas linhas.

Cada linha é composta por dois números, o primeiro número, O, representa a operação sendo feita.

Quando O for 1 significa que após será enviado um número inteiro Pi (0 ≤ Pi ≤ 10⁷
) representando uma nova placa
identificada pela família.

Quando O for 2, o número seguinte que acompanha Ti (1 ≤ Ti ≤ 100) representando a pergunta que deve ser respondida:
Liste as Ti menores placas lidas até o momento.

A entrada termina em EOF.

## Limites
---
* P (quantidade de placas) - indeterminado!
* Pi (numeral de cada placa) - 0 ≤ Pi ≤ 10⁷
– não existem placas repetidas
* Ti (quantidade de placas a imprimir) 1 ≤ Ti ≤ 100
– nunca será pedido para imprimir mais que 100 placas.

## Saída
---
A saída é composta por diversas linhas. Sempre que O for 2 você deve imprimir uma única linha contendo as Ti menores
placas identificadas pela família até o momento.

## Exemplos
---
### Exemplo de entrada
---
    1 1365271
    1 9164517
    1 5782846
    2 2
    1 1153896
    1 3641547
    2 2
    1

### Saída para o exemplo acima
---
    1365271 5782846
    1153896 1365271

### Exemplo de entrada
---
    1 9019747
    1 3629786
    1 7091927
    2 1
    1 2013733
    1 4784225
    1 7865835
    1 7145336
    1 3536931
    1 9584045
    1 1967593
    2 7

### Saída para o exemplo acima
---
    3629786
    1967593 2013733 3536931 3629786 4784225 7091927 7145336

### Exemplo de entrada
---
    1 5
    2 1
    1 4
    2 2

### Saída para o exemplo acima
---
    5
    4 5

Author: Bruno Ribas