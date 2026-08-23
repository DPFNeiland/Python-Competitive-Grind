


n = int(input())
resp = []
suma = 0


for i in range(n):
    aux = int(input())

    if not aux and len(resp):
        resp.pop()
    
    else:
        resp.append(aux)


for i in range(len(resp)):
    suma += resp [i]

print(suma)

