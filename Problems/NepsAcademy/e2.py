

t1 = int(input())
t2 = int(input())
t3 = int(input())

if t1 < t2 and t1 < t3:
    print("1")

    if t2 < t3:
        print("2\n3")
    
    else:
        print("3\n2")

elif t2 < t1 and t2 < t3:
    print("2")

    if t1 < t3:
        print("1\n3")
    
    else:
        print("3\n1")

else:
    print("3")

    if t1 < t2:
        print("1\n2")
    
    else:
        print("2\n1")