maior = 0
somaA = 0
somaP = 0

n = int(input())

a = list(map(int, input().split()))

for i in range(n):
    if a[i] > a[maior]:
        maior = i

# soma post
for i in range(maior + 1, n):
    somaP += a[i]

# soma anterior
for i in range(maior - 1, -1, -1):
    somaA += a[i]

print(somaA)
print(somaP)