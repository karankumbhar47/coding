class StoreImformation:
    company='KK'

    def __init__(self,name,idt):
        self.idt=idt
        self.name=name
        print('Giving Data')
        # print(f'The name of programmer is {self.name}\nand id no. is {self.idt} \nworking in {self.company}')

    
    def getData(self):
        print(f'The name of programmer is {self.name}\n and id no. is {self.idt} \n working in {self.company}')

class Data(StoreImformation):

    def changeData(self,name1):
        self.name1=name1

karan=StoreImformation('Karan','12140860')
# print(karan.name())
didi=Data('Karan','12140860')
didi.changeData('didi')
print(didi.name())

# import math
# class Calculator:
#     def __init__(self,a,c):
#         self.addition=a+c
#         self.subtration=a-c
#         self.multiplication=a*c
#         self.division=a/c
#         self.squareRoot=math.sqrt(a)
#         self.square=a*a
#         self.cube=a*a*a
#         print('Answer is',)
    
# ans=Calculator(1,3)
# Calculator.addition()
