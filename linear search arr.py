sumit=[]
n=int(input("Enter the size of array:"))
print("Enter the elements")
for i in range (n):
    data=int(input())
    sumit.append(data)
print(sumit)
def search(sumit,num):
    for i in range (len(sumit)):
        if num==sumit[i]:
             print("The number is found in position ",i)
             break
        else :
             print("The number is not found")

num=int(input("Enter the number you want to search"))
search(sumit,num)
             
      
      
