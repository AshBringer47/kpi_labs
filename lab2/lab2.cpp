#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL,"Russian");
float x, y;
cout << "Gunawardana Shiron, IS-92. Please enter the value of x: ";
cin >> x;

/*Вводимо х*/

if (x < 0) {
	y = -x;
} /*Значення менше 0*/
else {
	y = pow(x, 2);
} /*Значення більше або рівне 0*/
cout << "y = " << y << endl;
} /*Виводимо y*/
