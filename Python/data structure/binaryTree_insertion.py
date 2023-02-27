class tree:
    class Node:
        __slot__='_element','_left','_right'
        def __init__(self,data,left,right) -> None:
            self._element=data
            self._left=left
            self._right=right
        
    def __init__(self,data) :
        self.root=self.Node(data,None,None)
        
    def add_right(self,p,data):
        if p._element!=None:
            n=self.Node(data,None,None)
            p._right=n
    def add_left(self,p, data):
        if p._element!=None:
            n=self.Node(data,None,None)
            p._left=n
    
    def delete(self):
        if self.root==None:
            return None
        else:
            p=[self.root]
            while(len(p)):
                temp=p[0]
                p.pop(0)
                if temp._right==None:
                    print(temp._element)
                    if temp._left==None:
                        print(temp._element)
                        temp=None
                        break
                    else:
                        p.append(temp._left)
                    temp=None
                    break
                else:
                    p.append(temp._right)
                    
                if temp._left==None:
                    print(temp._element)
                    temp=None
                    break
                else:
                    p.append(temp._left)
                    
                    
    
    def insert(self,data):
        if self.root._element==None:
            self.root=self.Node(data,None,None)
            return 
        else:
            p=[self.root]
            while(len(p)):
                temp=p[0]
                p.pop(0)
                if temp._left==None:
                    n=self.Node(data,None,None)
                    temp._left=n
                    break
                else:
                    p.append(temp._left)
                
                if temp._right==None:
                    n=self.Node(data,None,None)
                    temp._right=n
                    break
                else:
                    p.append(temp._right)
                    
            
        
    def preorder(self,r):
        if r is not None:
            print(r._element)
            self.preorder(r._left)
            self.preorder(r._right)
        else:
            return
        
    def print(self):
        self.preorder(self.root)




t=tree(None)
# p=t.root
# t.add_left(p,2)
# t.add_right(p,3)
# p=p._left
# t.add_left(p,4)
# t.add_right(p,5)
# p=t.root._right
# t.add_left(p,6)
# t.add_right(p,7)

# print(t.root._element)

t.insert(8)
t.insert(9)
t.insert(5)
t.insert(7)
t.insert(6)
t.insert(52)

t.delete()
# t.delete()
# t.delete()
# t.print()