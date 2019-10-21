// laba2_c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
else if (x > 0) {
	y = pow(x, 2);
} /*Значення більше 0*/
else {
	y = 0;
} /*Значення рівне 0*/
cout << "y = " << y << endl;
} /*Виводимо y*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
