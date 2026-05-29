from collections import deque

def verificador(cad: str):    
    pilha = deque()
    
    for char in cad:
        
        if char == '(' or char == '[' or char == '{': pilha.append(char)
            
        if char == ')':
            if len(pilha) == 0 or pilha[-1] != '(': return False
            else: pilha.pop()

        if char == ']':
            if len(pilha) == 0 or pilha[-1] != '[': return False
            else: pilha.pop()               
            
        if char == '}':
            if len(pilha) == 0 or pilha[-1] != '{': return False
            else: pilha.pop()

    if len(pilha) != 0:
        return False
    
    return True


n = int(input())
resp = []

for _ in range(n):
    cadeia = input()
    
    if verificador(cadeia): resp.append("S")
    else: resp.append("N")
    
for res in resp:
    print(res)