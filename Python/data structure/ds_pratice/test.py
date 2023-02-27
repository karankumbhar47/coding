l = [-1, -1, 6, 1, 9, 3, 2, -1, 4, -1]
n = len(l)
i = 0
while( i < n - 1 ):
    print(i)
    if l[i] == -1 or l[i] == i:
        i +=1
    elif l[i] != i:
        l[i],l[l[i]-1] = l[l[i]-1],l[i]
        i = min(i,l[l[i]-1]-1)
    else:
        print(l[i],i)
        break
    
print(l)