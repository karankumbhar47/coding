import ctypes


class queue:
    def __init__(self):
        self.size = 0
        self.capacity = 3
        self.data = queue.make_array(self.capacity)()
        self.head = 0
        self.tail = 0

    def enqueue(self, data):
        if self.size < self.capacity:
            self.data[self.tail % self.capacity] = data

        else:
            b = queue.make_array(self.capacity*2)()
            if (self.head%self.capacity) < (self.tail%self.capacity):
                b = self.data

            else:
                i = 0
                while (self.head+i < self.tail):
                    b[i] = self.data[self.head+i % (self.capacity)]
                    i += 1
            self.tail = self.capacity
            self.head = 0
            self.data = b
            self.capacity *= 2
            self.data[self.tail % self.capacity] = data

        self.tail += 1
        self.size += 1

    def dequeue(self):
        if self.size == 0:
            return None
        print(self.data[self.head%self.capacity])
        self.head += 1
        self.size -= 1

    def is_empty(self):
        print(self.size == 0)
    def len(self):
        print(self.size)

    def make_array(c):
        return (c * ctypes.py_object)


if __name__ == "__main__":
    q = queue()
    q.is_empty()
    q.enqueue(1)
    q.enqueue(2)
    q.enqueue(3)
    q.enqueue(4)
    q.enqueue(4)
    q.enqueue(4)
    q.enqueue(4)
    q.enqueue(4)
    q.enqueue(4)
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.len()
