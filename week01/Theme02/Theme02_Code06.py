# Theme02_Code06.py

from collections import deque

d = deque()

d.appendleft(0)
d.appendleft(1)
d.append(2)
d.append(3)
d.appendleft(4)

print(d[0], d[-1]) # 4 3

d.popleft()
d.pop()
d.appendleft(5)
d.append(6)

print(d[0], d[-1]) # 5 6