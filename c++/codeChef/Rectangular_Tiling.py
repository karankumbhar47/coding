import math
for _ in range(int(input())):
    #s=input()
    h,w=map(int,input().split())
    #n,x,y=map(int,input().split())
    if(h%2==1 and w%2==1):
        print("NO")
    else:
        print("YES")
