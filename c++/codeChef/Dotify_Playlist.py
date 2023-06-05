import math
for _ in range(int(input())):
    #s=input()
    #n,k=map(int,input().split())
    n,k,l=map(int,input().split())
    ksum = 0
    allList = []
    while n:
        n-=1
        m,lang = map(int,input().split())
        if(lang==l):
            allList.append(m)
    if(len(allList)<k):
        print(-1)
    else:
        allList.sort()
        print(sum(allList[-k:]))