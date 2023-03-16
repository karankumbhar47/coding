# cook your dish here
for _ in range(int(input())):
    mod = 1000000007
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    c=0
    p=0
    m=1
    pr=l[0]
    flag=0
    for i in l:
        if i-pr==0 :
            c+=1
        elif i-pr==1 :
            pr=i
            p+= (c*m)%mod
            p = p % mod 
            if c!=1 and flag==0:
                m=c
                flag=1
            elif c!=1 and flag==1:
                m+=c
            # else:
            #     p+=p
            #     p= p%mod
            c= 1
            # print(p,m)
        else:
            break
    p += (c*m)%mod
    p = p%mod
    print(p)