class heap:
	def __init__(self):
		self.a=[]	
	def parent(self,i):
		if i==0:
			return i
		return (i-1)//2
	def children(self,i):
		if(2*i+2<len(self.a)):
			return (2*i+1,2*i+2)
		elif(2*i+1<len(self.a)):
			return (2*i+1,None)
		return (None,None)
	def add(self,data):
		if(self.a==[]):
			self.a.append(data)
		else:
			self.a.append(data)
			i=len(self.a)-1
			p=self.parent(i)#returing parent index	
			while(self.a[p]<data):
				self.a[p],self.a[i]=self.a[i],self.a[p]
				i=p
				p=self.parent(i)
	def pop(self):
		if(self.a==[]):
			return None
		x=self.a[0]
		self.a[0]=self.a.pop()
		i=0
		while(True):
			(l,r)=self.children(i)
			largest=i
			if l:
				if(self.a[l]>self.a[largest]):
					largest=l
			else:
				break
			if r:
				if(self.a[r]>self.a[largest]):
					largest=r
			if (largest!=i):
				self.a[i],self.a[largest]=self.a[largest],self.a[i]
				i=largest
			else:
				break
		return x
	def print(self):
		print(self.a)		
# a=heap()
# a.add(1)
# a.print()
# a.add(2)
# a.print()
# a.add(3)
# a.print()
# a.add(4)
# a.print()
# a.add(5)
# a.add(6)
# a.add(7)
# print(a.pop(),"::::::")
# print(a.pop(),"::::::")
# print(a.pop(),"::::::")
# a.add(8)
# a.print()
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
h.pop()
h.print()
print("===================")
h.pop()
h.print()
print("===================")
h.pop()
h.print()
print("===================")
