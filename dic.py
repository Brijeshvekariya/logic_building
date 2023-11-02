dic = {}
n = int(input("Enter the size of nested dic : "))

for i in range(n):
    dic_name = {}
    name = input("Enter Name : ")
    age = int(input("Enter Age : "))
    dic_name[name] = age
    dic[i] = dic_name
print(dic)