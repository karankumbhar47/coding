import math
for _ in range(int(input())):
    n=int(input())
    c=2
    mp = {}
    while(n>1):
            if(n%c==0):
                if(mp[c]!=0):
                    mp[c]=1
                n/=c
            else:
                c+=1
    print(mp)