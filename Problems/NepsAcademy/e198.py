

def resultado(v: list[list]):
    
    # calculo da soma
    aux = 0
    soma = 0
    for i in range(tam):
        soma += v[0][i]
    
    # verifico as somas das linhas
    for i in range(tam):
        aux = 0
        for j in range(tam):
            aux += v[i][j]
        
        if aux != soma:
            return False
    
    # verifico as somas das colunas    
    for i in range(tam):
        aux = 0
        for j in range(tam):
            aux += v[j][i]
        
        if aux != soma:
            return False
    
    # verifico a soma da diagonal principal
    aux = 0
    for i in range(tam):
        aux += v[i][i]
        
    if aux != soma:
        return False
    
    # verifico a soma da diagonal secundária
    aux = 0
    for i in range(tam):
        aux += v[i][tam - i - 1]
        
    if aux != soma:
        return False
    
    return True

tam = 3
v = [[0 for _ in range(tam)] for _ in range(tam)] 


for i in range(tam):
    for j in range(tam):
        v[i][j] = int(input())
        
if resultado(v):
    print("SIM")

else:
    print("NAO")