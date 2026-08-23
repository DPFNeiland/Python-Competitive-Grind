
H, P, F, D = map(int, input().split())

while True:
    
    if F == H:
        print("S")
        break
        
    if F == P:
        print("N")
        break
    
    F += 1*D    
    F = (F + 16) % 16
    
    