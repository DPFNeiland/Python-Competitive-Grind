


n, m = map(int, input().split())

a = []

for i in range(n):
    lista = list(map(int, input().split()))
    a.append(lista)

# soma das colunas
somaColunas = 0
for i in range(n):
    somaColunas += a[i][0]
    somaColunas += a[i][m-1]

somaLinhas = 0
for i in range(m):
    somaLinhas += a[0][i]
    somaLinhas += a[n-1][i]

print(somaColunas + somaLinhas - a[0][0] - a[0][m-1] - a[n-1][0] - a[n-1][m-1])