n = int(input("Enter any number : "))
fact = 1
for i in range(n,0,-1):
    fact *= i
print(f"The factorial of {n} is ",fact)