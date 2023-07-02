a=int(input('Enter no. of students: '))
d={}
for i in range(a):
    l=[]
    n=str(input('Enter Name: '))
    p=float(input('Enter Percentage: '))
    if p>85:
        g='A'
    elif p>70 and p<85:
        g='B'
    else:
        g='C'
    l.append(p)
    l.append(g)
    d[n]=l
print(d)


