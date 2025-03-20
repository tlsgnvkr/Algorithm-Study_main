# Theme01_Code02.py

import queue

q = queue.Queue()
    
q.put(0)
q.put(1)
q.put(2)

print(q.qsize(), q.empty()) # 3 False

q.put(3)
q.put(4)
q.get()
q.get()

print(q.qsize(), q.empty()) # 3 False

q.get()
q.get()
q.get()

print(q.qsize(), q.empty()) # 0 True