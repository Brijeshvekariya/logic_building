'''
A
BC
DEF
GHIJ
KLMNO

pattern

'''
c=65
n = int(input("Enter Number of Rows : "))
for i in range(0,n):
    for j in range(i+1):
        print(chr(c),end=" ")
        c+=1
    print()