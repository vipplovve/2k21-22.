def revtriangle(n=int()):
    if n == 0:
        pass
    else:
        list = []
        for i in range(0, n):
            list.append(sym)

        st = ''.join(list)
        print(st)
        revtriangle(n - 1)


sym = input('Enter the symbol to be used: ')
n = int(input('Enter the Height for the Triangle: '))

print()
print('The Required Figure is: ')
print()

revtriangle(n)
