import math
for _ in range(int(input())):
    n,m=map(int,input().split())
    l=list(map(int,input().split()))
    ans=[-1 for i in range(n)]
    mlist =[0 for i in range(m)]
    j=-1
    for i in range(m):
        if j==(-n-1):
            break
        if(mlist[l[i]-n-1]==0):
            ans[j]=i+1
            j-=1
            mlist[l[i]-n-1]=1
            print(mlist)
            print(ans)
    for i in range(n):
        print(ans[i],end=" ")
    print("\n",end="")
