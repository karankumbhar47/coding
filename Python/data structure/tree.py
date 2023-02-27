'''
left children and right children 
children has fixed position

'''
class BinaryTree:             #array and double linked list used for tree
    class Stack:
        def __init__(self):
            self.stk=[]
            self.size=0
        def push(self,data):
            self.size+=1
            self.stk.append(data)
        def pop(self):
            if self.size!=0:
                self.size-=1
                return self.stk.pop()
            else:
                return -1
        def is_empty(self):
            return self.size==0
    class Node:
        __slots__='_element','_left','_right'
        def __init__(self,data,left,right):
            self._element=data
            self._left=left
            self._right=right
    def __init__(self,data):
        self.root=self.Node(data,None,None)
    

    def add_left(self,p,data):
        n= self.Node(data,None,None)
        p._left=n

    def add_right(self,p,data):
        n= self.Node(data,None,None)
        p._right=n

    def preorder(self,r):
        if r is not None:
            print(r._element)
            self.preorder(r._left)
            self.preorder(r._right)
        
    def preorder(self,r):
        st=self.stack()
        st.push(r)
        while not st.isempty():
            p=st.pop()
            print(p._element)
            if p.right is not None:
                print("(",str(p._right),")")
                st.push(p._right)
            if p._left is not None:
                st.push(p._left)
                print("(",str(p._left),")")


    def print(self):
        self.preorder(self.root)
    

t = BinaryTree(1)
p = t.root
t.add_left(p,9)
t.add_right(p,5)
p = p._left
t.add_left(p,8)
t.add_right(p,7)
p = p._left
t.add_left(p,2)
p = t.root
p = p._right
t.add_left(p,4)
t.add_right(p,3)
t.print()






