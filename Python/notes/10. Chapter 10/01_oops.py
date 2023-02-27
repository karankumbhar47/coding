# class Number:
#     def sum(self):
#         return self.a + self.b

# num = Number()
# num.a = 12
# num.b = 34
# s = num.sum()
# print(s)

# # a = 12
# # b = 34

# # print("The sum of a and b is ", a+b)

# '''
# PascalCase 
# EmployeeName -->PascalCase 

# camelCase
# isNumeric, isFloatOrInt -->camelCase
# '''
class StoreImformation:
    def __inti__(self,name,salary,address,unit):
        self.name=name
        self.salary=salary 
        self.address=address
        self.unit=unit
    def data(self,name,salary,address,unit):
        print(f'{name},{salary},{address},{unit}')
karan=StoreImformation()
Soham=StoreImformation()
karan.StoreImformation('Karan',100,'Vasagade',8)
Soham.StoreImformation('Soham',105,'Karad',19)
print(karan.data())
print(Soham.data())
