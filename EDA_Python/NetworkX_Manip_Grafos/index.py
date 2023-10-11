import networkx as nx

G = nx.Graph()

# Adiciona vértices/nós
G.add_node('v1')
G.add_node('v2')
G.add_node('v3')
G.add_node('v4')
G.add_node('v5')

# Adiciona arestas
G.add_edge('v1', 'v2')
G.add_edge('v2', 'v3')
G.add_edge('v3', 'v4')
G.add_edge('v4', 'v5')
G.add_edge('v5', 'v1')
G.add_edge('v2', 'v4')

# Listar os vértices
print('Lista de vértices')
print(G.nodes())

# Listar as arestas
print('Lista de arestas')
for e in G.edges():
	print(e)

# Mostra a lista de graus
print('Lista de graus de G')
print(G.degree())

# Acessa o grau do vértice v2
print('O grau do vértice v2 é %d' %G.degree()['v2'])

# Grafo como lista de adjacência -> utilizamos um dicionário em que a chave retorna todos os vizinhos daquele nó
print('Grafo como lista de adjacências')
print(G['v1'])
print(G['v2'])
print(G['v3'])
print(G['v4'])
print(G['v5'])

# Adiciona um campo peso em cada aresta do grafo
G['v1']['v2']['peso'] = 5
G['v2']['v3']['peso'] = 10
G['v3']['v4']['peso'] = 2
G['v4']['v5']['peso'] = 7
G['v5']['v1']['peso'] = 4
G['v2']['v4']['peso'] = 8

print('Adicionando pesos as arestas')
for edge in G.edges():
	u = edge[0]
	v = edge[1]
	print('O peso da aresta', edge, 'vale', G[u][v]['peso'])
	