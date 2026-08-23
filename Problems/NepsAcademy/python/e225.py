

n = int(input())
p, c, q = map(str, input().split())
p, q = int(p), int(q)

resp = 'OK'

if c == '+':
    if p + q > n:
        resp = 'OVERFLOW'

else:
    if p * q > n:
        resp = 'OVERFLOW'


print(resp)