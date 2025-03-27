# Theme03_Code01.py

n, m = map(int, input().split())
avoid = [[False] * (n + 1) for _ in range(n + 1)]

for _ in range(m):
    a, b = map(int, input().split())
    avoid[a][b] = True
    avoid[b][a] = True

res = 0
for i in range(1, n + 1):
    for j in range(i + 1, n + 1):
        for k in range(j + 1, n + 1):
            if not (avoid[i][j] or avoid[j][k] or avoid[k][i]):
                res += 1

print(res)