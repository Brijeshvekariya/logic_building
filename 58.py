n = int(input("Enter any number : "))
fact = 1
while n>0:
    fact *= n
    n -= 1
print(f"The factorial is ",fact)