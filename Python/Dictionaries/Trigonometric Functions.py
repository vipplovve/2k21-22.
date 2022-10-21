x=float(input('Enter an angle in degrees: '))
import math
a=math.radians(x)
s=math.sin(a)
c=math.cos(a)
t=math.tan(a)
cosec=1/s
sec=1/c
cot=1/t
d=dict(zip(('Angle','Sin(x)','Cos(x)','Tan(x)','Cosec(x)','Sec(x)','Cot(x)'),(x,s,c,t,cosec,sec,cot)))
print()
print('The respective trigonometric functions are: ')
print()
print(d)