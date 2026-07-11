

par = []
impar = []

for i in range(10):
    aux = int(input())

    if aux % 2 == 0:
        par.append(aux)
    else:
        impar.append(aux)

print(" ".join(map(str, par)))
print(" ".join(map(str, impar)))