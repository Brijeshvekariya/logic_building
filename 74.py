'''
1+(1+2)+(1+2+3)+(1+2+3+4) 
'''
n = int(input("Enter N term : "))
i_sum = 0
o_sum = 0
for i in range(1,n+1):
    i_sum = i_sum + (i)
    o_sum += i_sum
print(o_sum)