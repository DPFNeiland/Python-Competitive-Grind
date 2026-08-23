

def maior(lista, N):
    men, mai = 1, max(lista)
    ans = 0

    def consegue(t):

        qtd = 0
        for valor in lista:
            qtd += valor // t

        return qtd >= N

    while men <= mai:
        mid = (men + mai) // 2

        if consegue(mid):
            ans = mid
            men = mid + 1

        else:
            mai = mid - 1

    return ans

cabos = [802, 743, 457, 539]
k = 11

print(maior(cabos, k))