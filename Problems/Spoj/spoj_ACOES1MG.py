
from math import floor, ceil

def particao(n, k):

    if n <= k:
        return 1
    
    if k == 1:
        return n

    return particao(floor(n/2), k) + particao(ceil(n/2), k) 

resps = []

while True:
    n, k = map(int, input().split())

    if n == 0 and k == 0:
        break

    resps.append(particao(n, k))




for resp in resps:
    print(resp)
