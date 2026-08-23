MAXN = 335

cadeiras = [1, 2, 0] * MAXN

a = int(input()) - 1
b = int(input()) - 1

a = cadeiras[a]

if a == cadeiras[b]:
    b = cadeiras[b+1]

else:
    b = cadeiras[b]


print(3 - a - b)

