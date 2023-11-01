n = int(input("Enter any number : "))
num = n
reverse = 0
remainder=0
while n!=0:
    remainder =int( n%10)
    reverse = reverse*10 + remainder
    n = int(n/10)
print("reverse Number is ",reverse)
if reverse==num:
    print ("The given number is a palindrome")
else:
    print ("The given number is not a palindrome")