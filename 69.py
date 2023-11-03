'''
1  2  3  4  5  6  7  8  9  10
36 37 38 39 40 41 42 43 44 11
35 64 65 66 67 68 69 70 45 12  
34 63 84 85 86 87 88 71 46 13
33 62 83 96 97 98 89 72 47 14
32 61 82 95 100 99 90 73 48 15
31 60 81 94 93 92 91 74 49 16
30 59 80 79 78 77 76 75 50 17
29 58 57 56 55 54 53 52 51 18
28 27 26 25 24 23 22 21 20 19


'''

n = 10  # The size of the pattern

# Create an n x n matrix with zeros
matrix = [[0 for _ in range(n)] for _ in range(n)]

# Initialize variables for direction (right, down, left, up)
direction = 0  # 0: right, 1: down, 2: left, 3: up

# Initialize variables for current position (row and column)
row, col = 0, 0

# Fill the matrix with values
for num in range(1, n**2 + 1):
    matrix[row][col] = num
    
    if direction == 0:
        if col + 1 < n and matrix[row][col + 1] == 0:
            col += 1
        else:
            direction = 1
            row += 1
    elif direction == 1:
        if row + 1 < n and matrix[row + 1][col] == 0:
            row += 1
        else:
            direction = 2
            col -= 1
    elif direction == 2:
        if col - 1 >= 0 and matrix[row][col - 1] == 0:
            col -= 1
        else:
            direction = 3
            row -= 1
    elif direction == 3:
        if row - 1 >= 0 and matrix[row - 1][col] == 0:
            row -= 1
        else:
            direction = 0
            col += 1

for row in matrix:
    for num in row:
        print(f'{num:4}', end=' ')
    print()

