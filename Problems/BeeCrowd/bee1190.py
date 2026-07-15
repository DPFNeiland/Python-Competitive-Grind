

n = 12
o = input()
resp = 0

for i in range(n):
    for j in range(n):
        aux = float(input())

        if (i + j >= 12) and (j > i):
            resp += aux

if o == 'M':
    resp = resp/30

print(f"{resp:.1f}")