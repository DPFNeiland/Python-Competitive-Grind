

n = int(input())

Ni = list(map(int, input().split())) 

resp = 0

for i in range(n - 2):
    
    if Ni[i] == 1 and Ni[i + 1] == 0 and Ni[i + 2] == 0:
        resp += 1 

print(resp)