n = int(input("Enter any Number : "))
max = 0
while n!=0:
    remainder =int( n%10)
    if remainder>max:
        max = remainder
    n = int(n/10)

print("Maximum number is : ",max)