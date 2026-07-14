MAXN = 103


p, s = map(int, input().split())
pedras = [False] * MAXN

for i in range(s):
    po, qtd = map(int, input().split())


    for j in range(po - 1, MAXN, qtd):
        pedras[j] = True
    
    for j in range(po - 1, -1, -qtd):
        pedras[j] = True

    
for i in range(p):
    print(int(pedras[i]))