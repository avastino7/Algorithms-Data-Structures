def hollow_sqr(n):
    n=n-1
    print((n+1)*" *")
    for k in range(n-1):
        print(" ",end='')
        print("*"+(2*n-1)*" "+"*")
    print((n+1)*" *")

hollow_sqr(5)   
