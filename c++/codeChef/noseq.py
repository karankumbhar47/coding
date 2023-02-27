def fun(n,k,s,l,ans):
    if n>1:
        if s%k==0:
            ans.append(0)
            s/=k
            l=[l[i]/k for i in range(1,n)]
            print(l,n,s,ans)
            if fun(n-1,k,s,l,ans)!=(-2):
                return fun(n-1,k,s,l,ans)
            else:
                ans=[]
        else:
            if (s-1)%k==0:
                ans.append(1)
                s-=1
                l=[l[i]/k for i in range(1,n)]
                print(l,n,s,ans)
                if fun(n-1,k,s,l,ans)!=(-2):
                    return fun(n-1,k,s,l,ans)
                else:
                    ans=[]
            if (s+1)%k==0:
                ans.append(-1)
                s+=1
                l=[l[i]/k for i in range(1,n)]
                print(l,n,s,ans)
                if fun(n-1,k,s,l,ans)!=(-2):
                    return fun(n-1,k,s,l,ans)
                else:
                    ans=[]
            else:
                return None
    else:
        print(l,n,s,ans)
        if l[0]==s:
            ans.append(1)
            print('if')
            return ans
        elif l[0]==(-s):
            ans.append(-1)
            print('elif')
            return ans
        else:
            print('else')
            ans=[-2]
            return -2
            
for _ in range(int(input())):
    n,k,s=map(int,input().split())
    l=[1]
    for i in range(n-1):
        l.append(l[-1]*k)
    print(l)
    ans=[]
    if fun(n,k,s,l,ans)==None:
        print(-2)
    else:
        print(*fun(n,k,s,l,ans))