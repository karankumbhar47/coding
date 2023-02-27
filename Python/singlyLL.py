class singlyLL:
    class Node:#ónly for internal use
        _slots_='_element','_next'
        def _init_(self,data,next):
            self._element=data
            self._next=next
    def _init_(self):
        self._head=None
        self._size=0

    def len(self):
        return self._size

    def is_empty(self):
        return self._size==0

    def add_at_start(self,data):
        n = self.Node(data,self._head)
        self._head = n
        self._size+=1

    def add_at_end(self,data):
        n = self.Node(data,None)
        t=self._head
        for i in range(self._size-1):
            t=t._next
        t._next=n
        self._size+=1

    def del_from_first(self):
        if not(self.is_empty()):
            t=self._head
            self._head=t._next
            self._size-=1
            return t
        else:
            return None

    def del_from_end(self):
        if not(self.is_empty()):
            t=self._head
            for i in range(self._size-2):
                t=t._next
            if t._next==None:
                t
            n=t.next
            t._next=None
            self._size-=1
            if n==None:
                return None
            return n._element
        else:
            return 'list is empty'

    def  print(self):
        t=self._head
        for i in range(self._size):
            print(t._element)
            t=t._next




s=singlyLL()
s.add_at_start(5)
s.add_at_start(10)
s.add_at_start(15)
s.add_at_start(20)
s.add_at_start(25)
s.add_at_start(30)
s.add_at_start(35)
s.add_at_start(40)
s.add_at_start(45)
s.add_at_start(50)
s.add_at_start(55)
s.add_at_start(60)
s.add_at_start(60)

inp = inp(input())
t=s._head()
if not s.is_empty():
    while True :
        if t._element==inp:
            print("Found")
            break
        else:
            t=t._next()
            if t==None:
                print("Notfounf")
                break
else:
    print("Nothing to search")


t=s._head()
num=t._element
if not s.is_empty():
    while t :
        if  num>t._next.element:
            num=t._next.element
            t=t._next()
            print(num)
            if t==None:
                break
else:
    print("Nothing to search")



p=None
c=s.head
n=c.next




