from math import inf




Casas = []
n = int(input())
Visitados = [False] * n
d = 0

for i in range(n):
    x, y  = map(int, input().split())

    Casas.append([
        x, y
    ])

aux = 0
distAux = inf

for i in range(n):
    
    if not (Visitados[i]):
        distAux = inf
        for j in range(i + 1, n):

            if not (Visitados[j]):

                
                if (distAux > ((Casas[i][0] - Casas[j][0])**2 + (Casas[i][1] - Casas[j][1])**2)**(1/2)):
                    distAux = ((Casas[i][0] - Casas[j][0])**2 + (Casas[i][1] - Casas[j][1])**2)**(1/2)
                    aux = j

        Visitados[aux] = True
        Visitados[i] = True
        d += distAux
    

print(f"{d:.2f}")