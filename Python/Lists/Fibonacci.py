l=[]
a=0
b=1
n=int(input('Enter the number: '))
l.append(a)
l.append(b)
for i in range(n-1):
   c=a+b
   l.append(c)
   a=b
   b=c
print()
print('Fibonacci series up to',n,'elements is: ',l)

