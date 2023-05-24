import math
#cook your dish here
for i in range(int(input())):
    m,n=map(int,input().split())
    flag=0
    arr=[]
    sum=0
    if n>m:
        print("NO")
    elif n==m:
        print("YES")
    else:
        while(m>=1):
            if m%2==0:
                m=m//2
                if m==n:
                    flag=1
                    break
                if m<n and m%2==0:
                    arr.append(m)
                    sum+=m;
                    if sum==n:
                        flag=1
                        break
                elif m<n and m%2==1:
                    sum+=m
                    if sum==n:
                        flag=1
                        break
                    elif sum+m==n:
                        flag=1
                        break
            else:
                arr.append(m)
                if m==n:
                    flag=1
                break
        # print(arr)
        if flag==1:
            print("YES")
        else:
            print("NO")
            # for i in range(len(arr)):
            #     if n-arr[i]>0:
            #         n=n-arr[i]
            #     elif n-arr[i]==0:
            #         flag=1
            #         break
            # if flag==1:
            #     print("YES")
            # else:
            #     print("NO")