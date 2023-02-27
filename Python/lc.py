# def evenSumPrefix(l):
#     if len(l)>1:
#         l[1]=l[0]+l[1]
#         if l[1]%2==0:
#             return evenSumPrefix(l[1:])
#         else:
#             return False
#     else :
#         if l[0]%2==0:
#             return True
#         else:
#             return False
# l=[1,4,4]
# print(evenSumPrefix(l))
# def sumN(a,b,c,n):
#     A=[i for i in range(1,a+1)]
#     B=[i for i in range(1,b+1)]
#     C=[i for i in range(1,c+1)]
#     l=[(x,y,z) for x in A for y in B for z in C if x+y+z==n ]
#     return l
# print(sumN(3,4,7,8))
# def convertWrd(s):
#     d={'zero':0 ,'one':1,'three':3,'four':4,'five':5,'six':6,'seven':7,'eight':8,'nine':9}
#     l=''
#     for i in range(len(s)):
#         if s[i]!=' ':
#             l=l+s[i]
#         if s[i]==' ':
#             print(d[l], end='')
#             l=''
#         elif i==len(s)-1:
#             print(d[l])
#             break
# convertWrd('one three four eight zero')
# l=[1,1,2,3,4,5]
# l=list(set(l))
# print(l)
# a='asdfghjj'
# for i in a:
#     print(i)
# def toOct(n):
#     if n>0:
#         r=n%8
#         n=n//8
#         return toOct(n)*10+r
#     else:
#         return n
# print(toOct(int(input())))
# l=[('IC100',7),('IC150',8),('CA100',6),('IC100',6),('IC100',8),('IC100',9)]
# def finalGrade(l):
#     dict={}
#     for i in range(len(l)):
#         if l[i][0] not in list(dict.keys()) :
#             dict[l[i][0]]=l[i][1]
#         else:
#             if dict[l[i][0]]<l[i][1]:
#                 dict[l[i][0]]=l[i][1]
#             else:
#                 dict[l[i][0]]=dict[l[i][0]]
#     return dict
# print(finalGrade(l))
# l=['',' ','/n','123',]
# def toNum(l):
#     l1=['0' if i=='/n' or i=='' or i==' ' else int(i) for i in l]
#     return l1
# print(toNum(l))

# l=['kk','rk','vu','rk']
# def countWrd(l):
#     d={}
#     for i in l:
#         if i in list(d.keys()):
#             d[i]=d[i]+1
#         else:
#             d[i]=1
#     return d
# print(countWrd(l))
# def nonVowel(s):
#     l=[i for i in s if i!='a' if i!='e' if i!='i' if i!='o' if i!='u' if i!='A'if i!='E'if i!='O'if i!='I'if i!='U' ]
#     return l
# print(nonVowel(input()))
# def arm(n,s,p,no):
#     if n==0:
#         if s==no:
#             return True 
#         else :
#             print(s,no)
#             return False
#     else:
#         s=s+((n%10)**p)
#         return arm(n//10,s,p,n)
# print(arm(153,0,3,153))
# def f(x):
#     if len(x)>=1:
#         if x[0]%2!=0:
#             return False 
#         else:
#             return f(x[1:])
#     else:
#         return True
# print(f([2,1,4,6]))
# print('hello Karan')
# p=1
# def pattern(n):
#     global p
#     s=n-p
#     if p<=n:
#         if p%3==0:
#             print(' '*s,'*'*p)
#             p=p+1
#             return pattern(n)
#         elif p%3==1:
#             print(' '*s,'$'*p)
#             p=p+1
#             return pattern(n)
#         else:
#             print(' '*s,'#'*p)
#             p=p+1
#             return pattern(n)
#     else:
#         return
# print(pattern(int(input())))
# for _ in range(int(input())):
#     n=int(input())
#     l=[1,n]
#     i=1
#     while len(l)<n:
#         l.insert(0,n-i)
#         if len(l)<n:
#             l.insert(0,1+i)
#         i+=1
#     for i in l:
#         print(i,end=' ')
#     print('\n',end='')
# import math
# a=13
# for b in range(1,1001):
#         c=a+b
#         f=c
#         l=set()
#         while a<=f:
#             l.add((math.gcd(a,c)))  
#             a=a+1
#             c=c+1
#         print(b,len(l))
# a=13
# for b in range(2,100):
#     l1=[a]
#     [l1.append(2*l1[-1]) for i in range(100)]
#     l2=[b]
#     [l2.append(2*l2[-1]) for i in range(100)]
    # print(l1)
    # print(l2)
    # for i in l1:
    #     for j in l2:
    #         if i==j:
    #             print(i,b) 
# n=int(input())
# def f(n):
# def evenSumprefix(l):
#     if len(l)>1:
#         if l[0]%2==1:
#             return False
#         else:
#             return evenSumprefix(l[1:])
#     else:
#         if l[0]%2==0:
#             return True
#         else:
#             return False
# print(evenSumprefix(l))
# def length(n):
#     if n==0:
#         return 0
#     return 1+length(n//10)
# def armstrong(n,d):
#     if n==0:
#         return 0
#     return ((n%10)**d)+armstrong(n//10,d)
# def isArmstrong(l):
#     if len(l)<1:
#         return False
#     elif len(l)==1:
#         return l[0]==armstrong(l[0],length(l[0]))
#     else:
#         return (l[0]==armstrong(l[0],length(l[0]))) or isArmstrong (l[1:])
# print(isArmstrong([1624,371]))
# l=[1,2,3,4]
# permu(l)=+[l[i]+permu(l[:i+1]+l[:i]) if for i in range(len(l))]
# def permu(l):
#     if len(l)==1:
#         return [l]
#     else:
#         r=[]
#         for i in range(len(l)):
#             for j in permu(l[:i]+l[i+1:]):
#                 r.append([l[i]]+j)
#         return r
# print(permu(l))

# import sys
# k=sys.argv
# m=open(k[1])
# n=k[2]
# # print(m.read(),n)
# for line in m.readlines():
#     if n in line:
#         print(n)
#         print(line)
# def multiply(m1,m2):
# 	l=[]
# 	for i in range(len(m1)):
# 		m=[]
# 		for j in range(len(m1)):
# 			sum=0
# 			for k in range(len(m2)):
# 				sum=sum+m1[i][k]*m2[k][j]
# 			m.append(sum)
# 		l.append(m)
# 	return l
# m1=[[1,2,3],[2,3,1]]
# m2=[[2,3],[1,3],[4,5]]
# print(multiply(m1,m2))
# k='sjklasjfkaljfaifqwiojf02j3inneifjw0iejfmfkofjfiojijiojoijf'
# if '123' in k:
# 	print('y')
print()