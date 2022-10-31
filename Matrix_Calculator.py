operation = input("Operation(use these notations; +,-,*) :")
C_A = int(input("No of columns of matrix A:"))
R_A = int(input("No of raws of matrix A:"))
print("Enter Matrix A:")
A = [[int(s) for s in input().split()] for i in range(C_A)] #Input matrix A

C_B = int(input("No of columns of matrix B:"))
R_B = int(input("No of raws of matrix B:"))
print("Enter Matrix B:")
B = [[int(s) for s in input().split()] for j in range(C_B)] #Input matrix B

print("Resultant Matrix:")
def add(a, b, c, d):
    if a == c and b == d: #condition
        X = [] #resultant matrix    
        for i in range(b):
            r = []
            x = 0
            for j in range(a):
                x = A[i][j] + B[i][j]
                r.append(x)
            X.append(r)
        for n in X:
            print(*n)
    else: print("Invalid")


def sub(a, b, c, d):
    if a == c and b == d: #condition
        X = [] #resultant matrix    
        for i in range(b):
            r = []
            x = 0
            for j in range(a):
                x = A[i][j] - B[i][j]
                r.append(x)
            X.append(r)        
        for n in X:
            print(*n)
    else: print("Invalid")


def mult(a, b, c, d):
    X = [] #resultant matrix
    if a == d: #condition to multiply two matrices
        for k in range(b):
            r = []
            for l in range(c):        
                x = 0
                for m in range(d):
                    x += A[k][m]*B[m][l]
                r.append(x)
            X.append(r)        
        for n in X:
            print(*n)
    else:print("Invalid")

if operation == "+":
    add(C_A, R_A, C_B, R_B)

elif operation == "-":
    sub(C_A, R_A, C_B, R_B)

elif operation == "*":
    mult(C_A, R_A, C_B, R_B)






                           
