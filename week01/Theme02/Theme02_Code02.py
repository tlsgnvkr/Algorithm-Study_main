# Theme01_Code02.py

import queue

q = queue.Queue()
    
q.put(0)
q.put(1)
q.put(2)

print(q.queue[0], q.queue[-1]) # 0 2

q.put(3)
q.put(4)
q.get()
q.get()

print(q.queue[0], q.queue[-1]) # 2 4