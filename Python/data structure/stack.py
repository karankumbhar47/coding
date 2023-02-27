class stack:
    def __init__(self):
        self.data = []
    
    def push(self,data):
        self.data.append(data)
    
    def del_at_end(self):
        if len(self.data)==0:
            return None
        print(self.data[-1])
        self.data.remove(self.data[-1])
        
    def is_empty(self):
        print(len(self.data)== 0)


s = stack()
s.push(1)
s.push(2)
s.push(3)
s.del_at_end()
s.del_at_end()
