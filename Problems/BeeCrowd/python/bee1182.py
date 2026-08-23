

n = 12

m = [[0] * n for _ in range(n)]

c = int(input())
t = input()
resp = 0.0

for i in range(n):
    for j in range(n):
        m[i][j] = float(input())

        if j == c:
            resp += m[i][j]

if t == 'S':
    print(f"{resp:.1f}")


else:
    print(f"{resp/n:.1f}")