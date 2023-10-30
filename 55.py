n = int(input("Enter a Number : "))
reverse=0
sum=0
remainder =int( n%10)
n = int(n/10)
sum += remainder

while n!=0:
    remainder =int( n%10)
    reverse = reverse*10 + remainder
    n = int(n/10)
sum += remainder
        
print("Sum of First and Last Digit is : ",sum)