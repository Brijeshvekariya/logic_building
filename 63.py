'''
1
10
101
1010
10101
pattern


'''

n = int(input("Enter Number of Rows : "))
for i in range(1,6):
    for j in range(1,i+1):
        print(j%2,end="")
    print()
