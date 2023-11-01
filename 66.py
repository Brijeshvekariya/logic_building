'''
A
AB
ABC
ABCD
ABCDE

'''

n= int(input("Enter Number of Rows : "))
for i in range (0, n):
    c=65
    for j in range (i+1):
        print(chr(c), end=" ")
        c+=1
    print()
