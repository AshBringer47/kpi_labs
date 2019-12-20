import os

def main():
    print_sum()

def print_sum():
    try:
        a = float(input("Gunawardana Shiron. IS-92. Please enter a, b, c.\na = "))
        b = float(input("b = "))
        c = float(input("c = "))
        T = ex_sum(a, b, c)
        print(T)
    except KeyboardInterrupt:
        print("\nProgram executed.")

def ex_sum(a, b, c):
    return (maxN(a, a + b) + maxN(a, b + c)) / (1 + maxN(a + b * c, 1.15))
