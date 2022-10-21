a=int(input('Enter the no. of last alphabet: '))
l=[]
s=''
for i in range(1,a+1):
    s=chr(i+64)*i
    l.append(s)
print()
print('The Alphabet Series would be: ',l)