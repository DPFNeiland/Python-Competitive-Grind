

def ordenacao(strings: list):

    n = len(strings)
    for i in range(1, n):
        j = i
        while (len(strings[j]) > len(strings[j - 1])) and j > 0:
            strings[j], strings[j - 1] = strings[j - 1], strings[j]
            j -= 1

    return strings

n = int(input())

resps = []

for i in range(n):
    strings = list(map(str, input().split()))

    strings = ordenacao(strings)

    resps.append(strings)



for resp in resps:
    print(" ".join(resp))