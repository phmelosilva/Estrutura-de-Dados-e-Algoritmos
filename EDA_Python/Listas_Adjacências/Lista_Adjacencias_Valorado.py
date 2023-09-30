class Grafo:

	def __init__(self, vertices):
		self.vertices = vertices
		
		# Criando o grafo com uma qnt de vértices indefinida, o que caracteriza lista de adj 
		self.grafo = [[] for i in range(self.vertices)] 

	def adiciona_aresta(self, u, v, peso): 
		# estamos pensando em grafo direcionado com peso nas arestas
		# Pegamos u-1 porque no Python a lista começa a partir do 0
		self.grafo[u-1].append([v,peso])

		# self.grafo[v-1].append([u,peso]) se o grafo for não direcionado
	
	def mostra_lista(self):
		for i in range(self.vertices):
			# Colocamos +1 no i pra ele não começar do 0 no Python
			print(f'{i+1}:', end='  ')
			for j in self.grafo[i]:
				print(f'{j} ->', end='  ')
			print('')

g = Grafo(4)

g.adiciona_aresta(1, 2, 5)
g.adiciona_aresta(1, 3, 7)
g.adiciona_aresta(1, 4, 6)
g.adiciona_aresta(2, 3, 9)

g.mostra_lista()

