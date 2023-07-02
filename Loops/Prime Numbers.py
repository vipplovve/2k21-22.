x = 0
a = int(input('Enter a Number: '))
for i in range(2, a):
    if a % i == 0:
        x += 1
        print(i)
        break
    else:
        x = 0
if x == 0:
    print(a, 'is a Prime Number.')
else:
    print(a, 'is not a Prime Number. ')
