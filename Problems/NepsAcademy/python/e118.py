
def ehVogal(char: str):
    
    if (char == "a" or char == "e" or  char == "i" or  char == "o" or  char == "u"):
        return True
    return False



string = input()

e = 0
d = len(string) - 1

resp = "S"

while d > e:
    
    while not ehVogal(string[e]):
        e += 1
    
    while not ehVogal(string[d]):
        d -= 1
    
    if string[e] != string[d]:
        resp = "N"
        break
    
    e += 1
    d -= 1

print(resp)