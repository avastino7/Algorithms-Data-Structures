def divisor(n):
    d = [1,n]
    
    for i in range(2,n):
        if i in d:
            break
        else:
            if n % i == 0:
                d.append(i)
                d.append(n//i)
    
    return d

n = 56
print(divisor(n))
