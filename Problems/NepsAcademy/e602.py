


N = int(input())

I = list(map(int, input().split()))

resp = 0

for i in range(N):

    resp += I[i] - 1

print(resp  )