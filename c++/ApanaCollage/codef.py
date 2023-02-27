for _ in range(int(input())):
    n,k=map(int,input().split())
    t=True
    l=[i for i in range(1,n+1)]
    for i in range(n):
        for j in range(i+1,n):
            if ((l[i]+k)*l[j])%4==0:
                l.remove(l[i])
                l.remove(l[j-1])
