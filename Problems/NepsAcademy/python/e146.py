
x = int(input())
y = int(input())

resp = 'eixos'

if x > 0: 
    resp = 'Q4'

    if y > 0:
        resp = 'Q1'


elif x < 0:
    resp = 'Q3'

    if y > 0:
        resp = 'Q2'





print(resp)