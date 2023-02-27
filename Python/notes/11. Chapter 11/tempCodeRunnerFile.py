# # class Animal:
# #     def __init__(self,type):
# #         self.type=type
# #         print(self.type)
   
# # class Pet(Animal):
# #     def __init__(self,Animalclass,type):
# #         super().__init__(type)
# #         self.Animalclass=Animalclass
# #         print(self.Animalclass)

# # class dog(Animal):
# #     def __init__(self,Dogtype,Animalclass):
# #         super().__init__(Animalclass)
# #         self.Dogtype=Dogtype
# #         print(self.Dogtype)
# # # sheru=Pet('cat','Domestic Animal')
# # sheru=dog('German Sheperd','Dog')



# # class TwoDvec:
# #     def __init__(self,i,j):
# #         self.iCap=i
# #         self.jCap=j
# #     def vector2D(self):
# #         print(f'Your 2D vector is : {self.iCap}i + {self.jCap}j')

# # class ThreeDvec(TwoDvec):
# #     def __init__(self, i, j, k):
# #         super().__init__(i, j)
# #         self.kCap=k
# #     def vector3D(self):
# #         print(f'Your 3D vector is : {self.iCap}i + {self.jCap}j + {self.kCap}k')

# # vec=TwoDvec(2,3)
# # vec1=ThreeDvec(2,3,4)
# # vec.vector2D()
# # vec1.vector3D()


# # class Employee:
# #     def __init__(self,salary):
# #         self.salary=salary
# #         self.increment=100
# #     @property
# #     def updateSalary(self):
# #         print(f'updated salary:-{self.salary+self.increment}')

# #     @updateSalary.setter
# #     def updateSalary(self,percentage):
# #         self.increment=int((self.salary)*percentage/100)

# # karan=Employee(1000)
# # print(karan.salary)
# # karan.updateSalary=5
# # karan.updateSalary

# class Comp:
#     def __init__(self,a,b):
#         self.numReal= a
#         self.numImg=b

#     def __str__(self):
#         if self.numImg<0:
#             return f'{self.numReal} - {-self.numImg}i'
#         else:
#             return f'{self.numReal} + {self.numImg}i'

#     def __add__(self,num2):
#         self.sumReal=self.numReal+num2.numReal
#         self.sumImg=self.numImg+num2.numImg
#         print('Your first number is : ',num1)
#         print('Your second number is : ',num2)
#         return Comp(self.sumReal, self.sumImg)

#     def __sub__(self,num2):
#         self.sumReal=self.numReal-num2.numReal
#         self.sumImg=self.numImg-num2.numImg
#         print('Your first number is : ',num1)
#         print('Your second number is : ',num2)
#         return Comp(self.sumReal, self.sumImg)
# num1=Comp(-2,-3)
# num2=Comp(6,8)
# sum=num1-num2
# print(sum)
# # num.__add__(2,3,4,5)

# class Vector:
#     def __init__(self,l):
#         self.l=l
        
#     def __str__(self):
#         self.s=f'{self.l[0]}(a0)'
#         self.j=1
#         for i in self.l[1:]:
#             self.s=self.s+f' + {i}(a{self.j})'
#             self.j=self.j+1
#         return self.s

#     def __mul__(self,vec2):
#         if len(self.l)!=len(vec2.l):
#             return 'Multiplication is not possible'
#         else:
#             self.l1=[]
#             for i in range(len(self.l)):
#                 self.l1.append(self.l[i]*vec2.l[i])
#             return f'Dot product of two given vectors is : {Vector(self.l1)}'

#     def __add__(self,vec2):
#         if len(self.l)!=len(vec2.l):
#             return 'Addition is not possible'
#         else:
#             self.l2=[]
#             for j in range(len(self.l)):
#                 self.l2.append(self.l[j]+vec2.l[j])
#             return f'Vector sum of two given vectors is : {Vector(self.l2)}'
    
#     def __len__(self):
#         self.n=0
#         for i in self.l:
#             self.n+=1
#         return self.n

# l1=list(map(int,input().split()))
# l2=list(map(int,input().split()))
# vec1=Vector(l1)
# vec2=Vector(l2)

# print(vec1)
# print(vec2)
# print('length of your vector 1 is ',vec1.__len__())
# print('length of your vector 2 is ',vec2.__len__())

# # print(len(vec2)) --> this throws an error if you are returning string 
# # print(len(vec1)) --> this returns only integer

# p=vec1*vec2
# s=vec1+vec2
# print(p)
# print(s)



# class TwoDvec:
#     def __init__(self,i,j):
#         self.iCap=i
#         self.jCap=j
#     def vector2D(self):
#         print(f'Your 2D vector is : {self.iCap}i + {self.jCap}j')

# class ThreeDvec(TwoDvec):
#     def __init__(self, i, j, k):
#         super().__init__(i, j)
#         self.kCap=k
#     def vector3D(self):
#         print(f'Your 3D vector is : {self.iCap}i + {self.jCap}j + {self.kCap}k')

# vec=TwoDvec(2,3)
# vec1=ThreeDvec(2,3,4)
# vec.vector2D()
# vec1.vector3D()

l=[1,2,3,4,5,6,7,8]
n=int(input())
l.remove(n)
print(l)