sentence=input("Enter a string:")
string=sentence.lower()
string=sentence.upper()
count=0
list1=["a","e","i","o","u"]
for char in sentence:
    if char in list1:
        count=count+1
print("No of vowels are",count)
