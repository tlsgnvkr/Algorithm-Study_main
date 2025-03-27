# Theme04_Code03.py

import sys

def recursion(idx):
    if idx == 0:
        return 0
    
    if idx % 2:
        return abs(recursion(idx // 2) - 1)
    else:
        return recursion(idx // 2)

sys.setrecursionlimit(10**6)
k = int(input())
print(recursion(k - 1))