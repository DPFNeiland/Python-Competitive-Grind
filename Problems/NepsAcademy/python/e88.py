
a, b, c = map(int, input().split())

resp = '*'

if a == b and a != c:
    resp = 'C'

elif a == c and a != b:
    resp = 'B'

elif b == c and b != a:
    resp = 'A'

print(resp)