
MAXN = 101

oceano = [[False]* MAXN for _ in range(MAXN)]
resp = 0

n = int(input())


for _ in range(n):
    xi, xf, yi, yf = map(int, input().split())

    for i in range(xi, xf):
        for j in range(yi, yf):
            if not oceano[i][j]:
                oceano[i][j] = True

for i in range(MAXN):
    for j in range(MAXN):
        if oceano[i][j]:
            resp += 1

print(resp)