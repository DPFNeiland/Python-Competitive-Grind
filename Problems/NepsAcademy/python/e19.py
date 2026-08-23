
n = int(input())
resp = 0

sapatos = [[0] * 31 for _ in range(31)]

for i in range(n):
    m, l = input().split()
    m = int(m)

    m -= 30
    if l == "E":
        sapatos[m][0] += 1
        
    else:
        sapatos[m][1] += 1
    
for i in range(31):
    resp += min(sapatos[i][0], sapatos[i][1])

print(resp)