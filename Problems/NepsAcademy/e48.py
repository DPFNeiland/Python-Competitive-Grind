

n = int(input())

diasAtuais = 0
resp = 0
for i in range(n):
    aux = int(input())
    
    resp += 1
    if diasAtuais + aux >= 1000000:
        break
    diasAtuais += aux

print(resp)