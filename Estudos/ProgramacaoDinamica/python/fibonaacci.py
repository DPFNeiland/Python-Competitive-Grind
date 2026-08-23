 
MAXN = 10000000
fibV = [-1 for _ in range(MAXN)]
fibV[0] = 0
fibV[1] = 1

# estado atual: F(n) = F(n-1) + F(n - 2)


# Top-Down
def fibTopDown(n):

    # caso base
    if n == 0:
        return fibV[0]
    
    if n == 1:
        return fibV[1]

    if fibV[n] != -1:
        return fibV[n]
    
    fibV[n] = fibTopDown(n-1) + fibTopDown(n-2)
    return fibV[n]


# Bottom Up
def fibBottomUp(n):

    if n == 0:
        return fibV[0]
    
    if n == 1:
        return fibV[1]


    if fibV[n] != -1:
        return fibV[n]

    for i in range(2, n + 1):
        fibV[i] = fibV[i-1] + fibV[i-2]

    return fibV[n]

while True:
    try:
        n = int(input())
        
        print(fibBottomUp(n))


    except EOFError:
        break