/*З точністю до 0.00001 порахувати: s = 1 + (-1)^n * (x^2n +1) / (2^n + 1)*/
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>

using namespace std;

void main()
{
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
			for (int n = 0; n < i; n++) { //Де, n - лічильник циклу
				Y = ((pow(-1, n) * (pow(x, 2 * n) + 1)) / (pow(2, n) + 1)); /*Задаємо формулу визначення n-го елементу ряду*/
				sum += Y; /*Значення суми елементів для кожної ітерації*/
			}
		}
		cout << "sum = " << fixed << setprecision(5) << sum << endl; /*Виводимо значення суми із точністю до 0.00001*/
	}
}
