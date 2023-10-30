n = int(input("Enter any number : "))
reverse = 0
remainder=0
while n!=0:
    remainder =int( n%10)
    reverse = reverse*10 + remainder
    n = int(n/10)
print("reverse Number is ",reverse)
