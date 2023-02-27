import math
x=int(input("enter number "))
print(f"is{x}=2a+2b+ab ?")

def f(n,y):
    a=(n**2)+(8*n)-(4*y)
    return a;

n=0
p=0
while p<=0 and n<=x/2: #ab=n-2x≥0
    if f(n,x)>=0:
        print(1)
        l=math.sqrt(f(n,x))
        a=(n+l)/2
        b=(n-l)/2 #a+b=n
        print(a,b)
        if type(a)==int and a>0 and b>0:
            print("yes ",a," and ",b)
            p=1
            print(2)
        elif type(a)==float and a>0 and b>0:
            k=10*a
            m=k%10
            print(3)
            if m==0:
                print("yes")
                print(int(a),int(b))
                p=1
                print(4)
        else:
            n=n+1
            print(5)
    else:
        n=n+1
        print(6)
if p==0:
    print("no")
else:
    print('erty')