b=[1,2,3,4,5,6,7,8,9]
print('''123
456
789''')
a=int(input('''Imagine the grid, then, select a number (x):'''))
b.remove(a)
print('x chose '+str(a))
c=int(input('''Imagine the grid, then, select a number (o):'''))
b.remove(c)
print('o chose '+str(c))
d=int(input('''Imagine the grid, then, select a number (x):'''))
b.remove(d)
print('x chose '+str(d))
e=int(input('''Imagine the grid, then, select a number (o):'''))
b.remove(e)
print('o chose '+str(e))
f=int(input('''Imagine the grid, then, select a number (x):'''))
b.remove(f)
print('x chose '+str(f))
g=int(input('''Imagine the grid, then, select a number (o):'''))
b.remove(g)
print('o chose '+str(g))
h=int(input('''Imagine the grid, then, select a number (x):'''))
b.remove(h)
print('x chose '+str(h))
i=int(input('''Imagine the grid, then, select a number (o):'''))
b.remove(i)
print('x chose '+str(i))
j=int(input('''Imagine the grid, then, select a number (x):'''))
b.remove(j)
print('x chose '+str(j))
y=[a,d,f,h,j]
z=[c,e,g,i]
print('x has',y)
print('o has',z)
print('''123
456
789''')
print('Look at the final results, then judge who won.')