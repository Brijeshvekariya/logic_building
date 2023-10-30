n = int(input("Enter Number : "))
t = n
sum = 0
product = 1
while n!=0:
    remainder =int( n%10)
    sum = sum + (remainder*remainder*remainder)
    n = int(n/10)

if sum == t:
    print("The given Number is Armstrong")