# Theme03_Code04.py

import sys

def recursion(res, n, m):
    if len(res) == m:
        print(*res)
        return
    
    for i in range(1, n + 1):
        if i not in res:
            recursion(res + [i], n, m)

sys.setrecursionlimit(10**6)
n, m = map(int, input().split())
recursion([], n, m)