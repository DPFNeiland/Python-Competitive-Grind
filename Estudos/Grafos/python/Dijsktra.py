from heapq import heappush, heappop
INF = 10**18

def dijkstra(grafo, origem, n):
    dist = [INF] * (n + 1)
    dist[origem] = 0
    heap = [(0, origem)]

    while heap:
        d, v = heappop(heap)
        if d != dist[v]:
            continue

        for u, peso in grafo[v]:
            nd = d + peso
            if nd < dist[u]:
                dist[u] = nd
                heappush(heap, (nd, u))

    return dist


# Exemplo de grafo

grafo = [
        [],
        [(2, 4), (5, 1)],
        [(1, 4), (3, 3)],
        [(2, 3), (4, 2)],
        [(3, 2), (5, 4)],
        [(1, 1), (4, 4)]
        ]

print(dijkstra(grafo, 1, len(grafo) - 1))