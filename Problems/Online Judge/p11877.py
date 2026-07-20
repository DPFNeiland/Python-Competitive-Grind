resps = []

def bostapoca(n):

    resp = 0
    while n >= 3:
        n -= 2
        resp += 1

    if n == 2:
        resp += 1
        
    return resp


while True:

    n = int(input())

    if not n:
        break

    resps.append(bostapoca(n))



for resp in resps:
    print(resp)