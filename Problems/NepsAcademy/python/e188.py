

n = int(input())
qtdElementos = [0] * 12
resp = []
qtdMax = -1

for i in range(n):
    aux = int(input()) - 1

    qtdElementos[aux] += 1


for i in range(12):
    if qtdElementos[i] > qtdMax:
        resp = []
        resp.append(i+1)
        qtdMax = qtdElementos[i]
    
    elif qtdElementos[i] == qtdMax:
        resp.append(i+1)

print(" ".join(map(str, resp)))