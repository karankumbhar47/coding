import math

# class heap:
#     def __init__(self) -> None:
#         self.a = []
        
#     def parent(self,i):
#         if i==0:
#             return i
#         else:
#             return math.floor((i-1)/2)
        
#     def children(self,i):
#         if (2*i+2) < len(self.a):
#             return [2*i+1,2*i+2]
#         elif(2*i+1)<len(self.a):
#             return [2*i+1,None]
#         else:
#             return [None,None]
        
#     def add(self,data):
#         if self.a==[]:
#             self.a.append(data)
#         else:
#             self.a.append(data)
#             i = len(self.a)-1
#             p = self.parent(i)
#             while(self.a[p]<data):
#                 self.a[i],self.a[p]=self.a[p],self.a[i]
#                 i = p
#                 p = self.parent(i)
    
#     def pop(self):
#         sortArray = []
#         sortArray.append(self.a[0])
#         self.a[0] = self.a.pop()
#         i = 0
#         largest = i
#         l = self.children(i)[0]
#         r = self.children(i)[1]
#         while(i < len(self.a)):
#             if l:
#                 if self.a[largest] < self.a[l]:
#                     largest = l
#             if r:
#                 if self.a[largest] < self.a[r]:
#                     largest = r
            
#             if largest != i:
#                 self.a[largest],self.a[i] = self.a[i],self.a[largest]

#             i = i+1
#             largest = i
#             l = self.children(i)[0]
#             r = self.children(i)[1]
#         # print(sortArray)

#     def print(self):
#         print(self.a)

# h = heap()
# h.add(3)
# h.add(2)
# h.add(6)
# h.add(7)
# h.add(1)
# h.add(8)
# h.add(0)
# h.add(4)
# h.print()
# print("===================")


# h.pop()
# h.print()
# print("===================")
# h.pop()
# h.print()
# print("===================")
# h.pop()
# h.print()
# print("===================")
# h.pop()
# h.print()
# print("===================")


class heap:
    def __init__(self) -> None:
        self.a = []

    def parent(self,i):
        if i ==0:
            return i
        else:
            return math.floor((i-1)/2)
    
    def children(self,i):
        if (2*i)+2 < len(self.a):
            return (2*i+1,2*i+2)
        elif (2*i)+1 < len(self.a):
            return (2*i+1,None)
        else:
            return (None,None)

    def add(self,data):
        if self.a == []:
            self.a.append(data)
        else:
            self.a.append(data)
            i = len(self.a) - 1
            p = self.parent(i)

            while( self.a[p] < data ):
                self.a[p],self.a[i] = self.a[i],self.a[p]
                i = p 
                p = self.parent(i)

    def pop(self):
        if self.a == []:
            return None
        else:
            key = self.a[0]
            self.a[0] = self.a.pop()
            i = 0
            l,r = self.children(i)
            largest = i
            while(i < len(self.a)):
                if l:
                    if self.a[l] > self.a[largest]:
                        largest = l
                    
                if r:
                    if self.a[r] > self.a[largest]:
                        largest = r
                    
                if i != largest:
                    self.a[largest],self.a[i] = self.a[i],self.a[largest]
                    
                i = i+1
                largest = i
                l,r = self.children(i)
                


    def print(self):
        print(self.a)


h = heap()
h.add(3)
h.add(2)
h.add(6)
h.add(7)
h.add(1)
h.add(8)
h.add(0)
h.add(4)
h.print()
print("===================")


h.pop()
h.print()
print("===================")
# h.pop()
# h.print()
# print("===================")
# h.pop()
# h.print()
# print("===================")
# h.pop()
# h.print()
# print("===================")
