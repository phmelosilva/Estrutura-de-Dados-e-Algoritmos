# Busca Binaria

O algoritmo de busca binária é um algoritmo clássico que busca que é usado como uma alternativa rápida para fazer buscas num conjunto de dados. Para que o algoritmo funcione, o conjunto deve estar ordenado.

Para fixar ideias, sua tarefa, nesse exercício, é ler um conjunto de N números inteiros e, em seguida, ler M números inteiros que devem ser buscados no conjunto de dados. Dado um inteiro x, seu algoritmo deve retornar um índice j tal que v[j-1] < x <= v[j].

## Entrada
---
A entrada é composta M+N+1 linhas. A primeira linha contém o valor de N e M, respectivamente (1 <= N, M <= 10^9). As N linhas seguintes contém números inteiros (que cabem num inteiro de 32 bits) que compõem o conjunto de dados de interesse de busca. Os N números são dados em ordem não decrescente. As M linhas seguintes contêm os inteiros que devem ser procurados no conjunto de dados.

## Saída
---
Para cada inteiro x dado, você deve imprimir j tal que v[j-1] < x <= v[j].

## Exemplo
---
### Entrada
---
    5 4
    1
    3
    4
    7
    9
    0
    15
    3
    5

### Saída
---
    0
    5
    1
    3

Author: John L. Gardenghi