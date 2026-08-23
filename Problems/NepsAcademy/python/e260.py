


p1, c1, p2, c2 = map(int, input().split())

resp = -1

if p1*c1 == p2*c2:
    resp = 0

elif p1*c1 < p2*c2:
    resp = 1

print(resp)