# Grafos Representados por Lista de Adjacências em Python

No código criado, temos algumas linhas de código que para mim podem ter ficado confusas de entender, então neste arquivo vou descrevê-las um pouco melhor.

Na linha:

	self.grafo = [[] for i in range(self.vertices)] 

Temos que o grafo é iniciado na instância (representada pelo self) como uma lista de listas vazias, já que não sabemos qual o tamanho da lista de adjacências de antemão. 

Então, self.grafo se refere a um atributo da instância da classe Grafo. É uma variável que armazenará a representação do grafo como uma lista de adjacência.

O primeiro [] cria uma lista vazia.

[[] for i in range(self.vertices)]: Isso é uma compreensão de lista. Ele cria uma lista de listas vazias. O for i in range(self.vertices) é usado para criar um número de listas vazias igual ao número de vértices/nós especificados quando você cria um objeto da classe Grafo.

Vamos dar um exemplo: 

se você criar um objeto da classe Grafo com vertices igual a 5, essa linha de código criará uma lista de listas vazias com 5 elementos. Cada elemento da lista representará um vértice do grafo e será inicialmente uma lista vazia, indicando que esses vértices não têm vizinhos ainda.

Aqui está como ficaria a representação do grafo após a execução dessa linha de código:

	self.grafo = [[], [], [], [], []]
	
Agora, self.grafo é uma lista que contém 5 listas internas vazias, e isso pode ser usado para construir a representação do grafo à medida que você adiciona arestas entre os vértices.