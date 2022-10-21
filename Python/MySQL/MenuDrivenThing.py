while True:
    print('Welcome to my program! ')
    print()

    def insert(a=0):
        l1 = '''create table if not exists Doctor
(ID integer,Name varchar(30),HospitalID integer,JoiningDate date,
Speciality varchar(30),Salary integer,Experience varchar(30) NULL)
            ;'''
        sql.execute(l1)
        no = int(input('How many individual records you want to enter? '))
        for i in range(no):
            id = int(input('Enter the ID: '))
            name=input('Enter the Name: ')
            hid=int(input('Enter Hospital ID: '))
            jd=input('Enter Joining Date: ')
            sp=input('Enter Speaciality: ')
            sal=int(input('Enter Salary: '))
            exp=input('Enter Experience')
            l2 = "insert into Doctor values ({},'{}',{},'{}','{}',{},'{}')"
            sql.execute(l2.format(id,name,hid,jd,sp,sal,exp))
            bridge.commit()


    def update(id):
        if type(c) == str:
            sql.execute("update doctor set {}='{}' where ID={};".format(b, c, a))
            bridge.commit()
            print('The respective records have been updated!')
        elif type(c)==int:
            sql.execute("update doctor set {}={} where ID={};".format(b, c, a))
            bridge.commit()
            print('The respective records have been updated!')


    def delete(id):
        sql.execute('delete from doctor where ID={};'.format(a))
        bridge.commit()
        print('The respective records have been deleted!')


    def search(ni):
        if q == 'ID':
            sql.execute('select * from doctor where ID={};'.format(i))
            print('Data Found!')
            ans = sql.fetchall()
            print(ans)
        elif q == 'Name':
            sql.execute("select * from doctor where Name='{}';".format(n))
            print('Data Found!')
            ans = sql.fetchall()
            print(ans)


    import mysql.connector as connector

    bridge = connector.connect(host='localhost', user='root', passwd='59123')
    if bridge.is_connected():
        print('Success! We are connected.')
    else:
        print('Failure! We are not connected.')
    sql = bridge.cursor()
    sql.execute('create database if not exists Hospital ;')
    sql.execute('use Hospital;')
    print('Choose what you want to do: ')
    print('''
1.Insert Records
2.Update Records
3.Delete Records
4.Search & Display ''')
    choice = int(input('Enter What you want to do: '))
    if choice == 1:
        print('Initiating Insertion.')
        insert()

    elif choice == 2:
        a = int(input('Enter the ID to be updated: '))
        b = eval(input('Enter What needs to be Updated(ID,Name,Salary etc): '))
        c = eval(input('Enter the new value: '))
        update(a)
    elif choice == 3:
        a = int(input('Enter the ID to be deleted: '))
        delete(a)
    elif choice == 4:
        q = input('Search with ID or Name? ')
        if q == 'ID':
            i = int(input('Enter the ID to be searched: '))
            search(i)
        elif q == 'Name':
            n = input('Enter the Name to be searched: ')
            search(n)

    Q = input('Do you wish to continue?(Yes/No) ')
    if Q == 'Yes':
        pass
    if Q == 'No':
        print('Closing the program.')
        bridge.close()
        break
