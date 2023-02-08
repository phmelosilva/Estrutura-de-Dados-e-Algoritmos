# Desfazer no Editor
Você foi contratado para trabalhar na Fábrica de Geração de Aplicativos (FGA). Todos na FGA estão focados no
desenvolvimento de um novo editor de texto, versátil, que funciona como IDE, editor de linguagens de marcação e também
um editor de texto.
O gerente de projetos te deu a tarefa de desenvolver a Estrutura de Desfazer do Aplicativo (EDA). O objetivo da EDA é
prover, para o editor, o famoso ctrl+z, ou seja, a funcionalidade de desfazer certas ações.
A demanda é a seguinte: o editor de texto, de tempos em tempos, enviará ao seu módulo EDA o conteúdo que havia em
determinado trecho do texto antes das alterações mais recentes do usuário. Caso o usuário deseje desfazer alguma ação, o
editor enviará ao seu aplicativo o comando desfazer, e você deve devolver a alteração mais recente do usuário que você
tem armazenada.
Nessa primeira versão do módulo EDA, não há limite para a quantidade de desfazer que o usuário pode solicitar.
## Entrada
---
A entrada é composta por várias linhas, sendo que cada linha pode conter:

* inserir STR, sendo STR a alteração mais recente que o usuário efetuou no editor, de tamanho máximo 100.

* desfazer, caso em que você deve devolver a última alteração do usuário no editor. Caso não haja nenhuma alteração a ser devolvida, você deve devolver a string NULL.

A entrada termina com EOF.

## Saída
---
Observe o exemplo abaixo.

## Exemplo de Entrada 1
---
    desfazer
    inserir Era uma vez
    inserir uma terra muito
    inserir distante
    desfazer
    inserir em que tudo era muito legal.
    inserir Mas ai, de
    inserir repente
    desfazer
    desfazer
    desfazer
## Exemplo de Saída 1
---
    NULL
    distante
    repente
    Mas ai, de
    em que tudo era muito legal.
    
Author: John L. Gardenghi 