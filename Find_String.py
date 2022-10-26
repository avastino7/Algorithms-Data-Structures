def find_string(n,x):
    s = 0
    p = 0
    for i in range(0,len(n)):
        for k in range(0 , len(x)):
            if i + (len(x) - 1) >= len(n):
                break
            elif n[i+k] == x[k]:
                s = s + 1
                continue
            else:
                continue
        if s == len(x):
            p = p + 1
            s = 0
            continue
        else:
            s = 0
            continue
    
    return p

n = "abracadabra"
x = "ab"

print(find_string(n,x))
