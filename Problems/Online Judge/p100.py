
# de fato, é melhor fazer uma coleção

memo = {1: 1}
def probrema(n: int):
    if n in memo:
        return memo[n]

    if n % 2:
        memo[n] = 1 + probrema(3*n + 1)
    else:
        memo[n] = 1 + probrema(n // 2)

    return memo[n]

while True:
    try:
        # print(probrema(int(input())))
        x, y = map(int, input().split())

        a, b = min(x, y), max(x, y)

        resp = -1

        for n in range(a, b+1):
            resp = max(resp, probrema(n))

        print(f"{x} {y} {resp}")


    except EOFError:
        break