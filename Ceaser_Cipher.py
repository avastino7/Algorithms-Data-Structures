def ceci(p,k):
    k = k % 26
    p = list(p)

    for i in range(len(p)):
        if p[i] == ' ':
            continue
        else:
            if p[i].isdigit():
                continue
            if ord(p[i]) >= 97 and ord(p[i]) <= 122:
                h = 122
            else:
                h = 90
                
            if ord(p[i]) + k > h:
                s = ord(p[i]) + k - 26
            else:
                s = ord(p[i]) + k
            
            p[i] = chr(s)
        
        
    p = ''.join(p)

    return p

p = 'YXzhXdxFk69'
k = 3

print(ceci(p,k))
