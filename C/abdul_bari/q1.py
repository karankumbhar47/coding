# Python3 program to find diameter of n-ary tree
	
# Here 10000 is maximum number of nodes in
# given tree.
diameter = [0 for i in range(10001)]

# The Function to do bfs traversal.
# It uses iterative approach to do bfs
# bfsUtil()
def bfs(init, arr, n):

	# Initializing queue
	q = []
	q.append(init)

	visited = [0 for i in range(n + 1)]
	
	for i in range(n + 1):
		visited[i] = 0
		diameter[i] = 0

	# Pushing each node in queue
	q.append(init)

	# Mark the traversed node visited
	visited[init] = 1
	
	while (len(q) > 0):
		u = q[0]
		q.pop(0)
		
		for i in range(len(arr[u])):
			if (visited[arr[u][i]] == 0):
				visited[arr[u][i]] = 1

				# Considering weight of edges equal to 1
				diameter[arr[u][i]] += diameter[u] + 1
				q.append(arr[u][i])
			
	ing = 0
	
	for i in range(n + 1):
		if(diameter[i] > diameter[ing]):
			ing = i
	
	# Return index of max value in diameter
	return ing

def findDiameter(arr, n):

	init = bfs(1, arr, n)
	val = bfs(init, arr, n)
	return diameter[val]

# Driver Code
if __name__=='__main__':
	
	# Input number of nodes
	n = 7

	arr = [[] for i in range(n + 1)]

	# Input nodes in adjacency list
	arr[1].append(2)
	arr[1].append(3)
	arr[1].append(6)
	arr[2].append(4)
	arr[2].append(1)
	arr[2].append(5)
	arr[3].append(1)
	arr[4].append(2)
	arr[5].append(2)
	arr[6].append(1)
	arr[4].append(7)
	arr[7].append(4)

	print("Diameter of n-ary tree is " +
		str(findDiameter(arr, n)))

# This code is contributed by rutvik_56

