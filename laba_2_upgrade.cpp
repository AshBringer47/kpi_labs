/*I've to find out the value of the function f(x) = -x, if y < 0, f(x) = x^2, if y > 0 and */
#include <iostream>

using namespace std;

void main()
{ 
		setlocale(LC_ALL, "russian");
		float x, y;
		cout << "Gunawardana Shiron, IS-92. Please enter the value of x: ";
		cin >> x;

		/*Вводимо х*/

		if (x < 0) {
			y = -x;
		} /*Значення менше 0*/
		else if (x > 0) {
			y = pow(x, 2);
		} /*Значення більше 0*/
		else {
			y = 0;
		} /*Значення рівне 0*/
		cout << "(" << x << ";" << y << ")" << "*\n";
		x++;
		while (y <= 50) {
			if (x < 0) {
				y = -x;
			} /*Значення менше 0*/
			else if (x > 0) {
				y = pow(x, 2);
			} /*Значення більше 0*/
			else {
				y = 0;
			} /*Значення рівне 0*/
			cout << "(" << x << ";" << y << ")" << "*\n";
			x++; /*Виводить точки (х, у), до моменту, коли останнє значення у буде більшим за 50*/
		}
} /*Виводимо y*/
