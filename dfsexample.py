#using a python dictionary to act as an adjency list
graph = {
    '5' : ['3','7'],
    '3' : ['2','4'],
    '7' : ['8'],
    '2' : [],
    '4' : ['8'],
    '8' : []
}

visited = set() #set to keep track of visited nodes of graph
def dfs(visited, graph, node): #function for dfs
    if node not in visited:
        print(node)
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)

#driver code
print("following is the depth first search")
dfs(visited, graph, '5')