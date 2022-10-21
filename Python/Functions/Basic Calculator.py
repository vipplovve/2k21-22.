def calculate(x=int(),y=int(),op=str()):

    if op == '+':
        print()
        print('The Sum is:', x+y)
    elif op == '-':
        print()
        print('The Difference is:', x-y)
    elif op == '*':
        print()
        print('The Product is:', x*y)
    elif op == '/':
        print()
        print('The Quotient is:', x/y)
    elif op == 'inv':
        print()
        print('The Respective Inverse are:', 1/x, '&', 1/y)


x = int(input('Enter The First Number: '))
y = int(input('Enter The Second  Number: '))
op = input('Enter The Operation (+,-,*,/,inv): ')

calculate(x, y, op)

