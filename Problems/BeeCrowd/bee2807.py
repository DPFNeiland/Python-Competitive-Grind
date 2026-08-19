maxn = 41
fib = [0] * maxn
fib[0], fib[1] = 1, 1


for i in range(2, maxn):

    fib[i] = fib[i-1] + fib[i-2]




n = int(input())

resp = ""
for i in range(n - 1, -1, -1):
    resp += str(fib[i])

    if i != 0:
        resp += " "
print(resp)
