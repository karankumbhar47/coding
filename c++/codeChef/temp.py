# cook your dish here
for _ in range(int(input())):
    n,k = map(int,input().split())
    st = input()
    s = "aeiou"
    kMes = 0
    G = 0
    flag = 0
    index = 0
    pos = 0
    for i in st:
        if i in s:
            pos = index
            kMes+=1
            flag =0
            if kMes%k==0 and kMes>0:
                flag==1
        else:
            if flag==1:
                G+=1
        print(index,G,kMes,flag)
        index+=1
    print(G,pos)
    print(pow(2,G-(n-pos-1)))