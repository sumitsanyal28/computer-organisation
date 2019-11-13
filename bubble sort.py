def bubblesort(data):
    for passnum in range(len(data)-1,0,-1):  
        for i in range(passnum):  
            if data[i]<data[i+1]:
                temp=data[i]
                data[i]=data[i+1]
                data[i+1]=temp
data=[22,12,21,45,32]
print(" BEFORE SORTING " )
print(data)
bubblesort(data)
print("after sort ")
print(data)
        


