# 0,1,1,2,3,5,8,13,21,34....

n = int(input())
k = [0,1]
p = None

if n == 0:
    p = 0

elif n == 1:
    p = 1

else:
    for i in range(1,n-1):
        k.append(k[i] + k[(i-1)])
        p = 2

if p == 0:
    print("None")
elif p == 1:
    print("[0]")
else:
    print(k)
