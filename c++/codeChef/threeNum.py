import math
# cook your dish here
for _ in range(100):
    n = _ 
    l=[]
    for i in range(2,math.floor(math.sqrt(n)+1)):
        if n%i==0:
            if n/i==i:
                l.append(i)
            else:
                l.append(i)
                l.append(int(n/i))
    print(_,"==>",l," ",end="")
    if len(l)<=1:
        print(-1)
    elif len(l)%2==0:
        print(1,l[-2],l[-1])
    else:
        print(1,l[-3],l[-2])