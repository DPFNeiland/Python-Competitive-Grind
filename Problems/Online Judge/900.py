
MAXN = 51
memo = [0] * 51
lista = []

def muro(n):

    if n <= 1:
        return 1
    
    if memo[n]:
        return memo[n]
    
    memo[n] = muro(n-1) + muro(n - 2)

    return memo[n]


while True:
    n = int(input())

    if not n:
        break
    lista.append(n)
    
for valor in lista:
    print(muro(valor))