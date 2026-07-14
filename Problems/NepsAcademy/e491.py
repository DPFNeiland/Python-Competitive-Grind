


aposta = list(map(int, input().split()))
resp = 0

resultado = list(map(int, input().split()))


for numero in aposta:
    if numero in resultado:
        resp += 1
    

if resp == 3:
    print("terno")

elif resp == 4:
    print("quadra")

elif resp == 5:
    print("quina")

elif resp == 6:
    print("sena")

else:
    print('azar')