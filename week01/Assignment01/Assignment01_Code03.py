# Assignment01_Code03.py

from collections import deque

n = int(input())
v = [0] + list(map(int, input().split()))

res = deque()
for i in range(1, n + 1):
    j = n - i + 1
    if v[j] == 1:
        res.appendleft(i)
    elif v[j] == 2:
        temp = res.popleft()
        res.appendleft(i)
        res.appendleft(temp)
    elif v[j] == 3:
        res.append(i)

print(*res)