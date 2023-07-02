def Root(no=int(), index=int()):

    n = no
    i = index
    if n > 0:
        p = 1 / i
        print('The Required Root is: ', n ** p)
    elif n < 0:
        if i == 2:
            n *= -1
            p = 1 / i
            return print('The Required Root is: ', str(n ** p) + 'i')
        else:
            print('ERROR! Can only calculate square root of -ve numbers. ')
    elif n == 0:
        print('The Required Root is: ', 0)


n = int(input('Enter a No.'))
i = int(input('Enter the required root: '))

Root(n, i)
