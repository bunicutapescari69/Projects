while 1==1:
    c=str(input('Operation (+,-,*,/,%,//):'))
    a=float(input('First number:'))
    b=float(input('Second number:'))
    if c=='+':
        print(a+b)
    elif c=='-':
        print(a-b)
    elif c=='*':
        print(a*b)
    elif c=='/':
        print(a/b)
    elif c=='%':
        print(a%b)
    elif c=='//':
        print(a//b)
    else:
        print("ERR:invalid operation")
