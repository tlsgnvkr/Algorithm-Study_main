# Assignment01_Code02.py

def function(val):
    stack = []
    for char in val:
        if char == '(': stack.append(1)
        else:
            if not stack: return "NO"
            stack.pop()
    
    return "YES" if not stack else "NO"

t = int(input())
for _ in range(t):
    val = input().strip()
    print(function(val))