

n = int(input())
m = int(input())
figurinhas = [False] * n
resp = n

for i in range(m):
    aux = int(input()) - 1

    if not aux >= n and not figurinhas[aux]:
        figurinhas[aux] = True
        resp -= 1


print(resp)