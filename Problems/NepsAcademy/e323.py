


v = list(map(int, input().split()))
resp = -1


for valor in v:

    if valor > resp:
        resp = valor

print(resp)