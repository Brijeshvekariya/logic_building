n = 0
while n != 3:
    num = int(input("Enter Number : "))
    original = num
    rev = 0 
    rem=0
    while num!=0:
        rem = int(num%10)
        rev = rev * 10 + rem
        num =int(num/10)
        print(rev)
    if rev == original:
        print("Number is Palindrome")
    else:
        print("Number is Not Palindrome")
    n+=1