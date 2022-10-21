a=int(input('Enter the coefficient of x²: '))
b=int(input('Enter the coefficient of x: '))
c=int(input('Enter the constant term: '))
import math
D=math.sqrt((b**2) - (4*a*c))
r1=((-b)+D)/2*a
r2=((-b)-D)/2*a
print()
print('The Quadratic Equation given was: ',(a),'x² +',b,'x +',c)
print('The Roots are: ',r1,r2)
