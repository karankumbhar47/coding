# '''
# binary search tree rotaion properties must be same
# minimum binary search tree configuration
# we need tree with minimum levels or minimum height
# with 
# left side and right side of the node of binary search tree are binary search tree
# left children < parent
# right children > parent
# '''


# class BinrarySearchTree:
#     class Node:
#         __slots__ = '_element', '_left', '_right', '_parent'

#         def __init__(self, data, left, right, parent):
#             self._element = data
#             self._left = left
#             self._right = right
#             self._parent = parent

#     class Stack:
#         def __init__(self):
#             self.stk=[]
#             self.size=0
#         def push(self,data):
#             self.size+=1
#             self.stk.append(data)
#         def pop(self):
#             if self.size!=0:
#                 self.size-=1
#                 return self.stk.pop()
#             else:
#                 return -1
#         def is_empty(self):
#             return self.size==0

#     def __init__(self, data):
#         self.root = self.Node(data, None, None, None)

#     def search_rotate(self,r):
#         #this will return node need to be rotate(lr) and height difference(lh)
#         if r is not None:
#             (lr,lh) = self.search_rotate(r._left)  #for left hand side of root
#             if lr is not None:
#                 return (lr,lh)
#             #this will return node need to be rotate(rr) and height difference(rh)
#             (rr,rh)=self.search_rotate(r._right)   #for right hand side of root
#             if rr is not None:
#                 return (rr,rh)
#             if lh-rh>1 or lh-rh<-1:
#                 return (r,lh-rh)
#             return (None,max(lh,rh)+1)
#         else:
#             return (None,0)


#     def add(self, p, data,):
#         if p._element > data:
#             if p._left is not None:
#                 self.add(p._left, data)
#             else:
#                 n = self.Node(data, None, None, p)
#                 p._left = n
#                 (r,val) = self.search_rotate(self.root)
#                 if r is not None:
                    
#                     if val>0:
#                         if r==self.root:
#                             self.root=r._left
#                             (r._left)._parent=None
#                         elif (r._parent)._left==r:
#                             (r._parent)._left=r._left
#                             (r._left)._parent=r._parent
#                         else:
#                             (r._parent)._right=r._left
#                             (r._left)._parent=r._parent
#                         self.add(r._left,r._element)
#                     if val<0:
#                         if r==self.root:
#                             self.root=r._right
#                             (r._right)._parent=None
#                         elif (r._parent)._left==r:
#                             (r._parent)._left=r._right
#                             (r._right)._parent=r._parent
#                         else:
#                             (r._parent)._right=r._right
#                             (r._right)._parent=r._parent
#                         self.add(r._right,r._element)
#                     # print(r._element,val)
#             #better to start search from root
#         elif p._element < data:
#             if p._right is not None:
#                 self.add(p._right, data)
#             else:
#                 n = self.Node(data, None, None, p)
#                 p._right = n
#                 (r,val) = self.search_rotate(self.root)
#                 if r is not None:
                    
#                     if val>0:#left hand side greater than right hand side
#                         if r==self.root:
#                             self.root=r._left
#                             (r._right)._parent=None
#                         elif (r._parent)._left==r:
#                             (r._parent)._left=r._left
#                             (r._left)._parent=r._parent
#                         else:
#                             (r._parent)._right=r._left
#                             (r._left)._parent=r._parent
#                         self.add(r._left,r._element)
#                     if val<0:
#                         if r==self.root:
#                             self.root=r._right
#                             (r._left)._parent=None
#                         elif (r._parent)._left==r:
#                             (r._parent)._left=r._right
#                             (r._right)._parent=r._parent
#                         else:
#                             (r._parent)._right=r._right
#                             (r._right)._parent=r._parent
#                         self.add(r._right,r._element)

#     def  children(self,p):
#         l=[]
#         if p is not None:
#             pass


#     def parent(self,r):
#         if r is not None:
#             return r._parent._element

#     # def preorder(self,r):
#     #     if r is not None:
#     #         self.preorder(r._left)
#     #         print(r._element)
#     #         self.preorder(r._right)
#     #     else:
#     #         return

#     def preorder(self,r):
#         st=self.Stack()
#         st.push(r)
#         while not st.is_empty():
#             p=st.pop()
#             print(p._element)
#             if p._right is not None:
#                 # print("(r",str(p._right._element),")")
#                 st.push(p._right)
#             if p._left is not None:
#                 st.push(p._left)
#                 # print("(l",str(p._left._element),")")
#     def print(self):
#         self.preorder(self.root)

#     def search(self,r,data):
#         if r is not None:
#             if r._element==data:
#                 return r
#             if  r._element>data:
#                 return self.search(r._left,data)
#             if r._element<data:
#                 return self.search(r._right,data)
#         else:
#             return None
# #minus right side
# s=BinrarySearchTree(1)
# p=s.root
# s.add(p,9)
# s.add(p,5)
# s.add(p,8)
# s.add(p,4)
# s.add(p,2)
# s.add(p,7)
# s.add(p,3)
# s.print()
# print("-"*10)
# print(s.search(s.root,14))


class bst:
    __slots__ = "_element","_parent","_left","_right"
    class Node:
        def __init__(self,data,left,right,parent):
            self._element = data
            self._parent = parent
            self._right = right
            self._left = left

    def __init__(self,data):
        self.root = self.Node(data,None,None,None)

    def sr(self,r):
        if r is not None:
            lr,lh = self.sr(r._left)
            if lr is not None:
                return lr,lh
            rr,rh = self.sr(r._right)
            if rr is not None:
                return rr,rh
            if lh-rh>1 or lh-rh<-1:
                return r,lh-rh
            return None,max(lh,rh)+1
        else:
            return None,0



    def add(self,p,data):
        if p._element > data:
            if p._left is not None:
                self.add(p._left,data)
            else:
                n = self.Node(data,None,None,None)
                p._left = n
                r,val = self.sr(self.root)
                if r is not None:
                    if val > 0:
                        if r == self.root:
                            self.root = r._left
                            (r._left)._parent = None
                        elif (r._parent)._left == r:
                            (r._left)._parent = r._parent
                            (r._parent)._left = r._left
                        else:
                            (r._parent)._right = r._left
                            (r._left)._parent = r._parent
                        self.add(r._left,r._element)
                    if val < 0:
                        if r == self.root:
                            self.root = r._right
                            (r._right)._parent = None
                        elif (r._parent)._right == r:
                            (r._right)._parent = r._parent
                            (r._parent)._right = r._right
                        else:
                            (r._parent)._left = r._right
                            (r._right)._parent = r._parent
                        self.add(r._right,r._element)
        else:
            if p._right is not None:
                self.add(p._right,data)
            else:
                n = self.Node(data,None,None,None)
                p._right = n
                r,val = self.sr(self.root)
                if r is not None:
                    if val > 0:
                        if r == self.root:
                            self.root = r._left
                            (r._left)._parent = None
                        elif (r._parent)._left == r:
                            (r._left)._parent = r._parent
                            (r._parent)._left = r._left
                        else:
                            (r._parent)._right = r._left
                            (r._left)._parent = r._parent
                        self.add(r._left,r._element)
                    if val < 0:
                        if r == self.root:
                            self.root = r._right
                            (r._right)._parent = None
                        elif (r._parent)._right == r:
                            (r._right)._parent = r._parent
                            (r._parent)._right = r._right
                        else:
                            (r._parent)._left = r._right
                            (r._right)._parent = r._parent
                        self.add(r._right,r._element)

    def print(self):
        self.preorder(self.root)

    def preorder(self,r):
        if r is not None:
            print(r._element)
            self.preorder(r._left)
            self.preorder(r._right)


s=bst(1)
p=s.root
s.add(p,9)
s.add(p,5)
s.add(p,8)
s.add(p,4)
s.add(p,2)
s.add(p,7)
s.add(p,3)
s.print()
print("-"*10)
# print(s.search(s.root,14))
