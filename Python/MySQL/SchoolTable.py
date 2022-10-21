import mysql.connector as connector

bridge = connector.connect(host='localhost', user='root', passwd='59123',database='SCHOOL')
if bridge.is_connected():
    print('OK, we are connected.')
else:
    print('NOT OK, we are not connected.')
sql = bridge.cursor()
sql.execute('select * from STUDENT;')  # OptionalCommand
print('Closing the connection now.')
bridge.close()
if bridge.is_connected():  # again checking if we are connected or not
    print('OK, we are connected.')
else:
    print('NOT OK, we are not connected.')
