# cook your dish here
for _ in range(int(input())):
    n = int(input())
    if n%2==1:
        print(-1)
    else:
        if n ==2:
            print("1 2")
        else:
            e =[]
            o =[]
            for j in range(3,n+1):
                # print(j)
                if (j%2==0):
                    e.append(j)
                else:
                    o.append(j)
            even = 0
            odd = 0
            # print(e,o)
            print("1 2",end=" ")
            for i in range(n-2):
                if even+1<=len(e)-1:
                    print(e[even],e[even+1],end=" ")
                    even+=2
                elif even<= len(e)-1:
                    print(e[even],end=" ")
                    even+=1
                if odd+1<=len(o)-1:
                    print(o[odd],o[odd+1],end=" ")
                    odd+=2
                elif odd<= len(o)-1:
                    print(o[odd],end=" ")
                    odd+=1
        print("\n",end='')
                
                
                    
                