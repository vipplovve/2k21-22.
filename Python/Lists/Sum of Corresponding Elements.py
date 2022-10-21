a=eval(input('Enter a list: '))
b=eval(input('Enter another list: '))
c=[]
for i in range(len(a)):
    o=a[i]
    p=b[i]
    s=o+p
    c.append(s)
print()
print('The Required list is: ',c)