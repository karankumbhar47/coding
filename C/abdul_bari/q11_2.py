class Node:
    def __init__(self, gold):
        self.gold = gold
        self.children = []

def max_gold_mined(root, L):
    memo = {}
    return dfs(root, L, memo)

def dfs(node, i, memo):
    if (node, i) in memo:
        return memo[(node, i)]
    if i == 0:
        memo[(node, i)] = node.gold
        return node.gold
    if not node.children:
        memo[(node, i)] = 0
        return 0
    max_gold = 0
    for j in range(min(3, len(node.children))+1):
        for k in range(min(i, j)+1):
            max_subtree_gold = []
            for p in range(j):
                max_subtree_gold.append(dfs(node.children[p], k-1, memo))
            for q in range(j, len(node.children)):
                max_subtree_gold.append(dfs(node.children[q], k, memo))
            max_gold_in_subtrees = sum(sorted(max_subtree_gold, reverse=True)[:k])
            max_gold = max(max_gold, max_gold_in_subtrees + node.gold)
    memo[(node, i)] = max_gold
    return max_gold

# Example usage
root = Node(0)
root.children = [Node(2), Node(3), Node(5)]
root.children[0].children = [Node(1), Node(4)]
root.children[1].children = [Node(6)]
print(max_gold_mined(root, 3))