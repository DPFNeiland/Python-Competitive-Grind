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



r, c = map(int, input().split())

grafo = [[] for _ in range(r)]

for _ in range(c):
    v, w, p = map(int, input().split())

    v -= 1
    w -= 1
    grafo[v].append([w, p])
    grafo[w].append([v, p])

resp = 0

for i in range(r):
    resp += dijkstra(grafo, i, r - 1)