n = 50
for i in range(n):
    if i<9:
        print(f"0{i+1}", end=" ")
    if i==10 or i == 20 or i == 30 or i == 40:
        print()
    if i>=9:
        print(i+1,end=" ")
    
    
