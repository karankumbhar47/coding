


for i in range(int(input())):
    n,k=map(int,input().split())
    if n<4:
        print("no")
    else:
        l1=[]
        l2=[]
        l3=[]
        for j in range(1,n+1):
            if j%4==0:
                l1.append(j)
            elif j%4==4-k:
                l2.append(j)
            else:
                l3.append(j)
        print("yes")
       
        while len(l1):
            print(l3[0],l1[0])
            l3.remove(l3[0])
            l1.remove(l1[0])
        while len(l2):
            print(l2[0],l3[0])
            l2.remove(l2[0])
            l3.remove(l3[0])