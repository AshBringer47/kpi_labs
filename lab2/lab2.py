import math #Додаємо бібліотеку math
try:
    x = float(input("Gunawardana Shiron IS-92. Please enter the value of x: ")) #Вводим значение х
    if x < 0:
        y = (-1) * x #Якщо значення менші за 0
    else:
        y = x ** 2 #Якщо значення більші або рівні 0
    print(y) #Виводим значение y
except KeyboardInterrupt:
    print("\nProgram executed")
except ValueError:
    print("Wrong value")
