def CompInt(p=int(), t=int(), r=int()):

    if p > 0 and t > 0 and r > 0:
        CI = p * ((1 + r / 100) ** t) - p
        A = CI + p
        print()
        print('Interest Compounded is: ', CI)
        print('Total Amount is: ', A)
    else:
        print('Invalid Entries given.')


p = int(input('Enter Principal Amount: '))
t = int(input('Enter Time Periods w.r.t Period when comp. freq. is 1: '))
r = int(input('Enter Rate of Interest (in %): '))

CompInt(p, t, r)
