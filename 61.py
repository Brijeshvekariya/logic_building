# 5 num from user and count even odd
e_count=0
o_count=0
for i in range(0,5):
    n = int(input("Enter %d number : "%(i+1)))
    if n%2==0:
        e_count+=1
    else:
        o_count+=1
print("The count of Even Number is : ",e_count)
print("The count of Odd Number is : ",o_count)
