# Assignment01_Code05.py

from collections import deque

def play_snake(n, apples, directions):
    snake = deque([(1, 1)])
    direction_index = 0
    time = 0
    moves = [(0, 1), (-1, 0), (0, -1), (1, 0)]  # Right, Up, Left, Down
    
    while True:
        y, x = snake[-1]
        time += 1
        
        dy, dx = moves[direction_index]
        ny, nx = y + dy, x + dx
        
        if ny < 1 or ny > n or nx < 1 or nx > n or (ny, nx) in snake:
            break
        
        snake.append((ny, nx))
        
        if (ny, nx) in apples:
            apples.remove((ny, nx))
        else:
            snake.popleft()
        
        if directions and time == directions[0][0]:
            _, turn = directions.popleft()
            if turn == 'L':
                direction_index = (direction_index + 1) % 4
            elif turn == 'D':
                direction_index = (direction_index + 3) % 4
    
    print(time)

if __name__ == "__main__":
    n = int(input())
    k = int(input())
    apples = {tuple(map(int, input().split())) for _ in range(k)}
    l = int(input())
    directions = deque((int(x), c) for x, c in (input().split() for _ in range(l)))
    
    play_snake(n, apples, directions)
