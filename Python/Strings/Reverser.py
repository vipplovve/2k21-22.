c=''
a=str(input('Enter a string: '))
for i in range(len(a)-1
               ,-1,-1):
    c+=a[i]
print("Original String was: ",a)
print('Reversed String is: ',c)
