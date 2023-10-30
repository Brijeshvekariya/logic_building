n = int(input("Enter total digit of fibnocci series : "))
a=0 
b=1
c=a+b
print("Fibnocci series is : ",a,end=" , ")
for i in range(3,n+1):
    print(b,end=" , ")   # c = a+b
    a=b
    b = c
    c = a+b
 
