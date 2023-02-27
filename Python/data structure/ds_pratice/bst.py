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
