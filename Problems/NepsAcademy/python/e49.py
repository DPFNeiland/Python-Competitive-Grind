

n = int(input())
f = list(map(int, input().split()))

# ida
pre = -100000

for i in range(n):

    if f[i] == -1:
        f[i] = min(i - pre,9)
    
    else:
        pre = i

# volta
pre = 100000
for i in range(n -1, -1, -1):

    if f[i] != 0:
        f[i] = min(f[i], min(pre - i,9))

    
    else:
        pre = i

print(" ".join(map(str, f)))