// Laba3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*З точністю до 0.00001 порахувати: s = 1 + (-1)^n * (x^2n +1) / (2^n + 1)*/
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;

void main()
{
	int n; /*Вводимо лічильник циклу*/
	int i; /*Вводимо кількість ітерацій*/
	long double x; /*Вводимо змінну x*/
	long double sum = 1.; /*Вводимо початкове значення суми ряду*/
	long double Y; /*Вводимо елемент ряду*/
	cout << " Gunawardana Shiron.\n IC-92\n Task number - 3" << endl;
	cout << "Please enter the value of x (x must be more than 0 and less than 1): " << endl;
	cin >> x;
	if (x <= 0 || x >= 1) {
		cout << "Wrong value of x" << endl; /*Згідно з умовою, задаємо дозволені значення х*/
	}
	else {
		cout << "Please enter the number of iterations (it must not be less than 0): " << endl;
		cin >> i; /*Задаємо кількість ітерацій*/
		if (i < 0) {
			cout << "Wrong value of i" << endl; /*Кількість ітерацій може бути лише невід'ємним числом*/
		}
		else
		{
			for (n = 1; n <= i; n++) {
				Y = ((pow(-1, n) * (pow(x, 2 * n) + 1)) / (pow(2, n) + 1)); /*Задаємо формулу визначення n-го елементу ряду*/
				sum += Y; /*Значення суми елементів для кожної ітерації*/
			}
		}
		cout << "sum = " << fixed << setprecision(5) << sum << endl; /*Виводимо значення суми із точністю до 0.00001*/
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
