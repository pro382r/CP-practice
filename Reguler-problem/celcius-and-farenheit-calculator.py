print("1. Find Celcius \n2. Find Farenheit\n\nEnter an option from there: ")

d=int(input())

if (d==1):
    F = float(input('Give farenheit value: '))
    C = (F-32)/1.8
    print('Result celcius is ', C)
elif (d==2):
    C = float(input('Give celcius value: '))
    F = C*1.8 + 32
    print('Result fernheit is ', F)
else:
    print('Enter only 1 or 2\n')
celcius-and-farenheit-calculator.py
