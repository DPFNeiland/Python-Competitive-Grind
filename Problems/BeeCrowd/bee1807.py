MOD = 2**31 - 1

def potencia_mod(base, expo, modulo):
    bolso = 1

    base = base%modulo
    while expo>0:
        if expo % 2== 1:
            bolso = (bolso*base)%modulo

        base = (base * base) % modulo
        expo = expo //2


    return bolso


n = int(input())




print(potencia_mod(3, n, MOD))
