a=str(input('Enter a String: '))
b=str(input('Enter the word to be searched: '))
if a.find(b)>-1:
    print(b,'Exists in',a)
else:
    print(b,'Doesnt Exists in',a)
    

