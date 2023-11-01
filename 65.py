'''
1
23
456
78910
1112131415

'''

n = int(input("Enter Number of Rows : "))
c = 1
for i in range(n):
    for j in range(i+1):
        print(c, end=" ")
        c += 1
    print()