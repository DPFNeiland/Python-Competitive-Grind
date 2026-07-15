

n = 12

o = input()
resp = 0

for i in range(n):
    for j in range(n):
        aux = float(input())
        if j > i:
            resp += aux


if o == 'S':
    print(f"{resp:.1f}")

else:
    print(f"{resp/66:.1f}")
