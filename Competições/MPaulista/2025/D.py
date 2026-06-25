
def verificar_ingredientes(lista_ingredientes: list, ingrediente_analisado):

    for ings in lista_ingredientes:
        if ingredientesRuins[ingrediente_analisado][ings]:
            return True
    
    return False

MAXN = 22
ingredientesRuins = [[False]* MAXN for _ in range(MAXN)]

n, m, p, s = map(int, input().split())

for i in range(m):
    x, y = map(int, input().split())

    ingredientesRuins[x][y] = True
    ingredientesRuins[y][x] = True

resp = 0

# roda os pãos
for pao in range(1, p + 1):

    # roda as salsichas
    for salsicha in range(p + 1, p + s + 1):


        # verifica se tem um pão e uma salsicha que não funfa
        if not ingredientesRuins[pao][salsicha]:    

            # rodo cada inggrediente
            for ingrediente in range(p + s + 1, n + 1):

                # verifica se o ingrediente tem a ver com as salsichas e pães anteriores
                if not ingredientesRuins[pao][ingrediente] and not ingredientesRuins[salsicha][ingrediente]:
                    
                    ingredientesAtuais = []
                    # verifico os próximos ingredientes existes
                    for futuros_ingredientes in range(ingrediente, n + 1):
                            
                        # verifico se até agora não existe um ingrediente que não combina com o outro
                        
                        if not ingrediente in ingredientesAtuais and not verificar_ingredientes(ingredientesAtuais, ingrediente):
                            ingredientesAtuais.append(ingrediente)
                    
                    resp += 2**len(ingredientesAtuais)
print(resp)