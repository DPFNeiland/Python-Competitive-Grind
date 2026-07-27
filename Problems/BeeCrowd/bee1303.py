
def media(time):

    return time[2] if time[3] == 0 else time[2]/time[3]

def ordenar(lista):
    
    n = len(lista)

    for i in range(1, n):
        
        j = i

        # ordenar baseado nos pontos
        while (
            j > 0 and 
            lista[j][1] > lista[j-1][1]):
                lista[j], lista[j-1] = lista[j-1], lista[j]
                j-=1

        # cesta average
        while (
            j > 0 and 
            lista[j][1] == lista[j-1][1] and 
            media(lista[j]) > media(lista[j-1])):
                
                lista[j], lista[j-1] = lista[j-1], lista[j]
                j-=1

        # cestas marcadas
        while (
            j > 0 and
            lista[j][1] == lista[j-1][1] and 
            media(lista[j]) == media(lista[j-1]) and
            lista[j][2] > lista[j-1][2]):
                lista[j], lista[j-1] = lista[j-1], lista[j]
                j -= 1

        # menor inscrição de liga
        while (
            j > 0 and
            lista[j][1] == lista[j-1][1] and 
            media(lista[j]) == media(lista[j-1]) and
            lista[j][2] == lista[j-1][2] and
            lista[j][0] < lista[j-1][0]):
                lista[j], lista[j-1] = lista[j-1], lista[j]
                j-=1

    return lista




inst = 1

while True:

    lista = list(map(int, input().split()))

    if lista[0] == 0:
        break
    
    elif len(lista) == 1:
        n = lista[0]
        # numero, pontos, cestas feitas e cestas sofridas
        listaTimes = [[0]*4 for _ in range(n)] 
        n = lista[0]

        for i in range(n*(n-1)//2):
            x, y, z, w = (map(int, input().split()))
            x -= 1
            z -= 1


            listaTimes[x][0] = x
            listaTimes[z][0] = z    


            if y > w:
                # x ganhou, z perdeu
                listaTimes[x][1] += 2
                listaTimes[z][1] += 1

                # fez e tomou
                listaTimes[x][2] += y
                listaTimes[x][3] += w

                # tomou e fez
                listaTimes[z][2] += w
                listaTimes[z][3] += y
            
            else:
                # z ganhou, x perdeu
                listaTimes[x][1] += 1
                listaTimes[z][1] += 2

                # fez e tomou
                listaTimes[z][2] += w
                listaTimes[z][3] += y

                # tomou e fez
                listaTimes[x][2] += y
                listaTimes[x][3] += w

        if inst > 1:
            print() 

        listaTimes = ordenar(listaTimes.copy())
        resp = ""
        print(f"Instancia {inst}")
        for i in range(len(listaTimes)):            
            resp += str(listaTimes[i][0] + 1)

            if i + 1 != len(listaTimes):
                resp += ' '
        print(resp)

        inst += 1


