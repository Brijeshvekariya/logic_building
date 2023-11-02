for i in range(0,5):
    n = int(input("Enter %d number : "%(i+1)))
    fact = 1
    while n>0:
        fact *= n
        n -= 1
    print(f"The factorial is ",fact)