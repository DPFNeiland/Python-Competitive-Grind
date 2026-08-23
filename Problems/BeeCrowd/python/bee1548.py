
def ordenar(lista):

    m = len(lista)

    for i in range(1, m):

        j = i
        while lista[j] > lista[j-1] and j > 0:
            lista[j], lista[j - 1] = lista[j - 1], lista[j]
            j -= 1

    return lista

n = int(input())


for _ in range(n):

    m = int(input())

    resp = 0

    lista = list(map(int, input().split()))
    
    listaO = ordenar(lista.copy())

    for i in range(m):
        if lista[i] == listaO[i]:
            resp += 1

    print(resp)