


m = int(input())
f1 = int(input())
f2 = int(input())

f3 = m - f1 - f2

if f1 > f2 and f1 > f3:
    resp = f1

if f2 > f1 and f2 > f3:
    resp = f2

if f3 > f1 and f3 > f2:
    resp = f3

print(resp)