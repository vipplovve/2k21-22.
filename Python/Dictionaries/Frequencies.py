a=str(input('Enter some info.: '))
w=a.split()
d={}
for i in w:
    k=i
    if k not in d:
        c=w.count(k)
        d[k]=c
print()
print('Frequencies of all words entered are: ',d)