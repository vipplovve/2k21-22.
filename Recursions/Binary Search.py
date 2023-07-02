array = eval(input('Enter a List of Data(Numeric Only): '))
while True:

    def BinSearch(array, key, low, high):
        mid = int((low + high) / 2)
        if low > high:
            return -1
        if key == array[mid]:
            return mid
        elif key < array[mid]:
            high = mid - 1
            return BinSearch(array, key, low, high)
        else:
            low = mid + 1
            return BinSearch(array, key, low, high)


    key = int(input('Enter the Item to be searched: '))

    ans = BinSearch(array, key, 0, len(array)-1) + 1

    if ans >= 1:
        print(key, 'Found at Position', ans)
    else:
        print('Item Not Found.')

    choice = input('Do you wish to continue? ')
    if choice == 'No':
        break
    else:
        pass
