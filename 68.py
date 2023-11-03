'''
*
**
***
****
*****
******
*****
****
***
**
*
'''

n= int(input("Enter Rows : "))
j=0
for i in range(n):
    for j in  range(i+1):
        print("*",end=" ")
    print()
for i in range(n+1):
    for k in range((n-i)+1,0,-1):
        print("*",end=" ")
    print()