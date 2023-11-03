'''
            *
           * *
         * * * *
       * * * * * *
     * * * * * * * *
'''

n = int(input("Enter Number of Rows : "))
for k in range(5):
        print("   "*(n-k),end=" ")
        for j in range((2*k)+1):
            print(' * ', end="")
        print()
