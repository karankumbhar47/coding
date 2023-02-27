class bst:
	class stack:
		def __init__(self):
			self.stk=[]
			self.size=0
		def push(self,data):
			self.stk.append(data)
			self.size+=1
		def pop(self):
			if(self.size>0):
				self.size-=1
				return self.stk.pop()
			return None
		def isempty(self):
			return len(self.stk)==0
	class Node:
		__slots__='_left','_element','_right','_parent'
		def __init__(self,data,left,right,parent):
			self._element=data
			self._left=left
			self._right=right
			self._parent=parent
	def __init__(self,data)
		self.root=self.Node(data,None,None,None)
	def search_rotate(self,r):
		if r is not None:
			(lr,lh) = self.search_rotate(r._left)
			if lr is not None:
				return (lr,lh)
			(rr,rh) = self.search_rotate(r._right)
			if rr is not None:
				return (rr,rh)
			if lh-rh>1 or lh-rh<-1:
				return (r,lh-rh)
			return (None, max(lh,rh)+1)
		else:
			return (None,0)
	
	def add(self,p,data):
		if p._element>data:
			if p._left is not None:
				self.add(p._left,data)
			else:
				n=self.Node(data,None,None,p)
				p._left = n
				(r,val) = self.search_rotate(self.root)
				if r is not None:
					if (val>0):
						if r==self.root:
							self.root=r._left
							r._left._parent=None
						elif r._parent._left == r:
							r._parent._left=r._left
							r._left._parent=r._parent
						else:
							r._parent._right=r._left
							r._left._parent=r._parent
						self.add(r._left,r._element)
							
					if(val<0):
						if r==self.root:
							self.root=r._right
							r._right._parent=None
						elif r._parent._left == r:
							r._parent._left=r._right
							r._right._parent=r._parent
						else:
							r._parent._right=r._right
							r._right._parent=r._parent
						self.add(r._right,r._element)

		elif p._element<data:
			if p._right is not None:
				self.add(p._right,data)
			else:
				n=self.Node(data,None,None,p)
				p._right = n
				(r,val)=self.search_rotate(self.root)
				if r is not None:
					if (val>0):
						if r==self.root:
							self.root=r._left
							r._left._parent=None
						elif r._parent._left == r:
							r._parent._left=r._left
							r._left._parent=r._parent
						else:
							r._parent._right=r._left
							r._left._parent=r._parent
						self.add(r._left,r._element)							
					if(val<0):
						if r==self.root:
							self.root=r._left
							r._left._parent=None
						elif r._parent._left == r:
							r._parent._left=r._right
							r._right._parent=r._parent
						else:
							r._parent._right=r._right
							r._right._parent=r._parent
					self.add(r._right,r._element)

	def children(self,p):
		l=[]
		if p is not None:
			if p._left is not None:
				l.append(p._left._element)
			else:
				l.append(None)
			if p._right is not None:
				l.append(p._right._element)
			else:
				l.append(None)
		return l
	def parent(self,r):
		if r:
			if(r._parent):
				return r._parent._element
			return None
		
		
	def preorder(self,r):
		if (r is not None):
			print(r._element)
			self.preorder(r._left)
			self.preorder(r._right)
	def postorder(self,r):
		if(r is not None):
			self.postorder(r._left)
			self.postorder(r._right)
			print(r._element)
	def inorder(self,r):
		if(r is not None):
			self.inorder(r._left)
			print(r._element)	
			self.inorder(r._right)
	def preorderf(self,r):
		st=self.stack()
		st.push(r)
		while(not st.isempty()):
			p=st.pop()
			print(p._element)
			if p._right is not None:
				st.push(p._right)
			if p._left is not None:
				st.push(p._left)
		
	def print(self):
		self.preorderf(self.root)
	
	def search(self,r,data):
		if r is not None:
			if r._element==data:
				return r
			if r._element>data:
				return self.search(r._left,data)
			if r._element<data:
				return self.search(r._right,data)
		return None
		
		
s = bst(1)
p=s.root
s.add(p,9)
s.add(p,5)
s.add(p,8)
s.add(p,4)
s.add(p,2)
s.add(p,7)
s.add(p,3)
s.print()
print('-'*10)
print(s.search(s.root,14))














