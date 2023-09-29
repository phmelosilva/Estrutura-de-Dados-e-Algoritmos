# Turnê de Leo e Henrique
A dupla sertaneja formada por Leo e Henrique não possuía muitos fãs e por isso esta recém-formada dupla resolveu entrar para um curso de graduação em uma universidade que fica no sul do país, e mais precisamente no sudoeste do estado. E agora esta dupla sertaneja passou a tocar o estilo de música muito popular na região: o Sertanejo Universitário.

Com a mudança do estilo de música esta dupla passou a ter muitos fãs e com isso o seu produtor musical passou a receber muitas requisições de shows em todo o país e outros países da América Latina.

Essa reviravolta na vida dos nossos artistas os deixou com vontade de brincar com a lista das cidades em que farão os shows, afinal a lista é muito grande.

A brincadeira consiste em pegar a lista de cidades com os próximos shows e operar ela como uma fila.

Como a primeira cidade nesta fila é onde será feito o próximo show, ela deverá ser riscada da fila. Se a próxima cidade começar com a mesma letra que termina o nome da cidade do último show, essa cidade vai para o final da fila e a próxima cidade é onde será realizado o show, mesmo que ela comece com a letra que terminou o nome da cidade em que o show foi recém-feito.

Porém, a lista de cidades entregue pelo produtor é muito grande, e por isso Leo e Henrique pediram a você, um colega de universidade (e curso), para implementar um programa de computador que gere a ordem das cidades em que serão feitos os shows.

## Entrada
---
A entrada é composta por um único caso de teste contento a lista de cidades entregues pelo produtor. Cada cidade c_i possui no máximo 26 caracteres. A quantidade de cidades é indefinida, ela termina com EOF.

Os nomes das cidades não possuem espaço. Você pode considerar que uma cidade sempre começa com uma letra maiúscula e termina com uma letra minúscula.

## Saída
---
A saída é composta por múltiplas linhas contento a ordem dos shows nas cidades.

## Exemplos
---
### Exemplo de Entrada
---
    Oiapoque
    Estrela
    Abaetetuba

### Saída para o exemplo de entrada acima
---
    Oiapoque
    Abaetetuba
    Estrela

### Exemplo de Entrada
---
    Brasilia
    Americana
    IlhaSolteira
    SaoPaulo
    OuroPreto

### Saída para o exemplo de entrada acima
---
    Brasilia
    IlhaSolteira
    SaoPaulo
    Americana
    OuroPreto

### Exemplo de Entrada
---
    Rondonopolis
    Mirandopolis
    Salete
    Itaituba
    Imperatriz
    Zacarias
    Manaus
    SaoJoao
    Ocara
    Aracatuba

### Saída para o exemplo de entrada acima
---
    Rondonopolis
    Mirandopolis
    Itaituba
    Imperatriz
    Manaus
    Ocara
    Salete
    Zacarias
    Aracatuba
    SaoJoao

Author: Bruno Ribas