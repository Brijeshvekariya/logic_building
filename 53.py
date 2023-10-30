n = int(input("Enter any number : "))
sum = 0
while n!=0:
    remainder =int( n%10)
    sum = sum + remainder
    n = int(n/10)
print("The total sum is ",sum)