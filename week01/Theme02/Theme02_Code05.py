# Theme02_Code05.py

from collections import deque

def print_deque(d):
    print(" ".join(map(str, d)))

d = deque()

d.appendleft(0)
d.appendleft(1)
d.append(2)
d.append(3)
d.appendleft(4)

print_deque(d)  # Output: 4 1 0 2 3

d.popleft()
d.pop()
d.appendleft(5)
d.append(6)

print_deque(d)  # Output: 5 1 0 2 6
