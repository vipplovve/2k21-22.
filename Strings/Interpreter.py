c,l,s=0,0,0
a=str(input('Enter a String: '))
for i in a:
    if i.isdigit()==True:
        c+=1
    elif i.isalpha()==True:
        l+=1
    elif i.isspace()==True:
        s+=1
print('Original String was: ',a)
print('No of Numbers: ',c)
print('No of alphabets: ',l)
print('No of whitespaces: ',s)
