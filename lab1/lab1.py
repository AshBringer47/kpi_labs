#Гунавардана Широн ІС-92
import math
import sys
import os
a = float(input("Please enter the value of the first member of the arithemtic progression: "))
d = float(input("Please enter the value of differnce between the members of the arithmetic progression: "))
n = int(input("Please enter the number of the members: "))
if n <= 0:
    sys.exit("Wrong value")
else:
    Sum_First_N = ((2*a + (n-1) * d ) * n / 2)
print (Sum_First_N)
os.system("pause")
