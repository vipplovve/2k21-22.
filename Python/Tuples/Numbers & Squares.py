a=int(input('Enter the first no.: '))
b=int(input('Enter the last no.: '))
c=[]
for i in range(a,b+1):
    s=i**2
    c.append(str(s))
print()
print('The squares of all natural no. in the range entered are: ',tuple(c))