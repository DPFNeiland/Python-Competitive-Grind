

def calcularQuadrado(n: int):

    primResp = int(n**(1/2)) + 1

    # rodar do primResp até 0
    
    for i in range(primResp, -1, -1):

        # rodar do seconResp = 0 até primResp

        for j in range(0, primResp, 1):

            if i**2 + j ** 2 == n:
                return True

    return False 

while True:
    try:
        n = int(input())

        # for n in range(0, 100000):
        print("YES" if calcularQuadrado(n) else "NO")

    except EOFError:
        break
