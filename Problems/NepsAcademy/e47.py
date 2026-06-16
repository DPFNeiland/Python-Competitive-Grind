



n = int(input())

lista = list(map(int, input().split()))

cont = 0

for i in range(0, n - 2, 1):
    
    if lista[i] == 1:
        if lista[i+1] == 0 and lista[i + 2] == 0:
            cont = cont + 1

print(cont)