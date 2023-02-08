# Mais um parser Wikipédico

Bruno Ribas

## Preâmbulo
---
Douglas, um jovem aluno que vive às margens do Rio Tocantins, começou a implementar um novo sistema de Wiki, com a
sua própria linguagem de marcação.
Nesta linguagem, quando o usuário desejar que parte do texto fique em negrito o texto deverá ser colocado entre asteriscos,
’*’, para colocar em itálico o texto deverá ser colocado entre barras, ’/’, e para ficar sublinhado deverá ser colocado entre
underscore, ’\_’.

O mais interessante deste modelo é que um texto pode ficar tanto em negrito quanto itálico, ou sublinhado e itálico, ou
qualquer composição com as três configurações. E o mais importante é que a ordem de fechamento da configuração do
texto deverá ser o inverso da ordem da configuração aberta (sempre feche a configuração mais recentemente aberta), e não
pode sobrar configuração sem fechar no fim do texto. Veja que a Primeira e Terceira cadeias abaixo estão corretas, já a
segunda e quarta não estão.

Um texto que começa em negrito e possui um texto em itálico dentro deverá finalizar o itálico antes de fechar o negrito,
ao contrário do que a Segunda cadeia faz, e por isso ela está errada.
* [Primeira cadeia] - O Rio \*Tocantins\* é um belo _rio_.

* [Segunda cadeia] - Isso \*aqui _nao pode estar\* certo_.

* [Terceira cadeia] - No _carnaval_ do /Rio de \*Janeiro\*/ sempre torço para a \*_/Imperatriz/_\*

* [Quarta cadeia] - As coisas começam a ficar \*/_confusas/_\*

Douglas está em uma fase delicada de seu projeto e precisa que o sistema valide o texto que foi adicionado por um usuário.
Parece que seus usuários não se atentam muito aos detalhes das configurações, gerando até entradas como a Segunda
cadeia acima.
O texto de entrada é composto por até N (1 ≤ N ≤ 100) linhas de até 100000 caracteres cada. Podem haver linhas vazias
e espaços consecutivos.

## Entrada
---
A entrada é composta por um único caso de teste com diversas linhas. A primeira linha, de um caso de teste, contém um
inteiro N, representando o número de linhas do texto. As N linhas seguintes contém até 100 caracteres.

## Saída
---
A saída é composta por uma única linha com a letra C quando o texto está com as configurações corretas e E quando
estiver errado.

## Exemplos
---
### Exemplo de entrada
---
    4
    Que belo texto sem configuracao.
    Aqui nada mais sei do que sei,
    O preco do limao esta mais caro
    que no japao.
### Saída para o exemplo acima
---
    C

### Exemplo de entrada
---
    4
    O poeta eh um *fingidor*.
    Finge tao /_completamente/_
    Que chega a fingir que eh dor
    A dor que _deveras_ sente.
### Saída para o exemplo acima
---
    E
### Exemplo de entrada
---
    4
    Um dia ele *passarah
    passarah tao bem que nada mais
    esperarah*
    Sera que um dia eu /passarei/?
### Saída para o exemplo acima
---
    C
    
Author: Bruno Ribas
2