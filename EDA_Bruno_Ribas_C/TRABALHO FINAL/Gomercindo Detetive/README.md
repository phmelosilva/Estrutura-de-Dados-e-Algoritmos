# Gomercindo detetive
Gomercindo possui um conjunto de pistas recolhidas pela policia. Cada pista possui um identificador, um valor e o
identificador da próxima pista.
O objetivo é ter todos os valores das pistas em ordem, mas as pistas estão desorganizadas, sabemos apenas que a primeira
pista encontrada é a primeira pista do conjunto todo.
O conjunto está tão extenso que Gomercindo não consegue mais fazer a ordem manualmente. E para agilizar o trabalho
você foi contratado para escrever um programa que leia o conjunto de pistas e imprima os valores de cada pista na ordem
de seus identificadores.
## Entrada
---
A entrada possui é composta de várias linhas. A primeira linha contém o número de pistas n (n ≥ 1). As n linhas seguintes
contém a tripla: identificador (0 < identificador ≤ 5000), valor (0 ≤ valor ≤ 1000000 e identificador da próxima pista.
Quando o identificador da próxima pista for -1 significa que essa é a última pista.
## Saída
---
Você deve exibir, em n linhas, os valores das pistas em ordem.
## Exemplo de Entrada
---
    3
    10 35 80
    20 50 -1
    80 57 20
## Exemplo de Saída
---
    35
    57
    50
## Explicação
---
Sabemos que a primeira pista é a primeira na ordem então a pista de identificação ‘10’ valor ‘35’ é a primeira, a segunda
pista é a pista de identificador ‘80’, logo o valor associado a pista ‘80’ deve ser impresso depois (que é o ‘57’), e por fim a
pista de identificador ‘20’ é a última pista.

\textit{\rightline{Author: Bruno Ribas (mojificação por John L. Gardenghi) }}
1