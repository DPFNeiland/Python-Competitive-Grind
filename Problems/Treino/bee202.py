from math import inf

maxn = 3

lista = [[0] * maxn for _ in range(maxn)]


aI,aJ = [], []
mA = -inf


for i in range(maxn):
    for j in range(maxn):
        lista[i][j] = int(input())

        if lista[i][j] > mA:
            mA = lista[i][j]
            aI = [i]
            aJ = [j]


        elif lista[i][j] == mA:
            aI.append(i)
            aJ.append(j)

for i in range(len(aI)):
    lista[aI[i]][aJ[i]] = -1            


for i in range(maxn):
    for j in range(maxn):
        print(lista[i][j], end=" ")
    print()