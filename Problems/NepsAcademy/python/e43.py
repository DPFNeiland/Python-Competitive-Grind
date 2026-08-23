



n = int(input())

valores = list(map(int, input().split()))
resp = [9] * n
indic = 99999999
# ida

for i in range(n):
    
    if valores[i] == 0:
        indic = i
        
    resp[i] = (min(resp[i], abs(i - indic) ))
    
# volta
indic = 99999999
for i in range(n - 1, -1, -1):
    
    if valores[i] == 0:
        indic = i

    resp[i] = (min(resp[i], abs(i - indic) ))


# empressão
for i in range(n):
    print(resp[i], end=" ")
print()