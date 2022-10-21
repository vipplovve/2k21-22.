def handshakes(p=int(), r=str()):

    if r == 'No':
        event = (p * (p - 1)) / 2
        print()
        print('No. of distinct handshakes will be', int(event))
    elif r == 'Yes':
        print()
        print('''Since repetitive handshakes are allowed, we can have infinite
number of handshakes.'''
              )


p = int(input('Enter the no. of people: '))
r = str(input('Is repetition of handshakes allowed? (Yes/No): '))

handshakes(p, r)
