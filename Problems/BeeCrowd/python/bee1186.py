


n = 12

c = input()
resp = 0

for i in range(n):
    for j in range(n):
        aux = float(input())

        if i + j >= 12:
            resp += aux


if c == 'S':
    print(f"{resp:.1f}")

else:
    print(f"{resp/66:.1f}")