

n = int(input())

resp = 0

for i in range(n):
    l, c = map(int, input().split())

    if l > c:
        resp += c


print(resp)