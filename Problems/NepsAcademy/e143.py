
moedas = [100, 50, 25, 10, 5, 1]
resps = [0, 0, 0, 0, 0, 0, 0]

n = int(input())


for i in range(len(moedas)):
    aux = n // moedas[i]
    
    resps[0] += aux
    resps[i + 1] = aux
    n -= (resps[i + 1] * moedas[i])
    
for resp in resps:
    print(resp)