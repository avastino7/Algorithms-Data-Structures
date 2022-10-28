def binary(n):
    p = []

    while n != 1:
        p.append(str(n%2))
        n = n//2

    p.append('1')
    p.reverse()

    x = "".join(p)
    x = int(x)

    return x

n = 5

print(binary(n))
