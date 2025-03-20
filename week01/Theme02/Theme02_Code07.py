# Theme02_Code07.py

from collections import deque

d = deque()

d.appendleft(0)
d.appendleft(1)
d.append(2)
d.append(3)
d.appendleft(4)

print(len(d)) # 5

d.popleft()
d.pop()
d.appendleft(5)
d.append(6)

print(len(d)) # 5

d.pop()
d.pop()
d.popleft()
d.pop()
d.popleft()

print(len(d)) # 0