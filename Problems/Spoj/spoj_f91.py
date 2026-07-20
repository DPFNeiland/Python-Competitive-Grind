

def f91(n):

    if n <= 100:
        return 91
    
    else:
        return n - 10

while True:

    n = int(input())
    
    if not n:
        break

    print(f"f91({n}) = {f91(n)}")