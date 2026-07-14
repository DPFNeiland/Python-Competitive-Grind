MAXN = 1010


n = int(input())
p = [0] * MAXN
soma = 0

for i in range(n):
    aux = int(input()) 

    p[i] = aux
    soma += aux

soma /= n

for i in range(n):
    print(int(soma - p[i]))