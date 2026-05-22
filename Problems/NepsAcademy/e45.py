


n = int(input())

valores = list()
somaLinha = list()
somaColuna = list()
resp = -1

for i in range(n):
    valores.append(list(map(int, input().split())))
    
    
# soma linha
for i in range(n):
    soma = 0
    for j in range(n):
        soma += valores[i][j]
    
    somaLinha.append(soma)
    

# soma coluna
for i in range(n):
    soma = 0
    for j in range(n):
        soma += valores[j][i]
    
    somaColuna.append(soma)
    
for i in range(n):
    for j in range(n):
        aux = somaLinha[i] + somaColuna[j] - 2*valores[i][j]
        
        if resp < aux:
            resp = aux
            
print(resp)     
    