from math import inf
n = 3

matriz = [[0] * n for _ in range(n)]

maior = -inf


for i in range(n):
    for j in range(n):
        matriz[i][j] = int(input())

        if matriz[i][j] > maior:
            maior = matriz[i][j]

for i in range(n):
    for j in range(n):
        if matriz[i][j] == maior:
            matriz[i][j] = -1

for i in range(n):
    for j in range(n):
        print(matriz[i][j], end=" ")
    
    print()

