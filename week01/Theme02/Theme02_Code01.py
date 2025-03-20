# Theme01_Code01.py

import queue

def print_queue(q):
    temp = queue.Queue()
    while not q.empty():
        item = q.get()
        print(item, end=" ")
        temp.put(item)
    while not temp.empty():
        q.put(temp.get())
    print()

q = queue.Queue()

q.put(0)
q.put(1)
q.put(2)

print_queue(q) # 0 1 2

q.put(3)
q.put(4)
print(q.get()) # 0
print(q.get()) # 1

print_queue(q) # 2 3 4