 diameter = array of size n+1, initialized to all 0s
        
        function bfs(init, arr, n):
        q = empty queue
        visited = array of size n+1, initialized to all 0s
        
        for i in range(n+1):
            diameter[i] = 0
        
        q.enqueue(init)
        visited[init] = 1
        
        while q is not empty:
            u = q.dequeue()
            
            for i in range(len(arr[u])):
                if visited[arr[u][i]] == 0:
                    visited[arr[u][i]] = 1
                    diameter[arr[u][i]] += diameter[u] + 1
                    q.enqueue(arr[u][i])
                
        max_node = 0
        
        for i in range(n+1):
            if diameter[i] > diameter[max_node]:
                max_node = i
        
        return max_node
        function findDiameter(arr, n):
        init = bfs(1, arr, n)
        val = bfs(init, arr, n)
        return diameter[val]
        
        Driver code
        n = number of nodes in the tree
        arr = adjacency list representation of the tree
        
        d = findDiameter(arr, n)
        print("The diameter of the n-ary tree is", d)