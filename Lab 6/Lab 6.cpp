#include <iostream>

using namespace std;

void Numerals(float*, float*, float*); // Ініціалізація змінних a, b, c.
float MaxN(float, float); // Знаходження максимального з чисел.
void Calculate(float, float, float); // Обчислення значення виразу.

int main() {
	float a, b, c; // Задаємо змінні.
	Numerals(&a, &b, &c);
	Calculate(a, b, c);
	return 0;
}

void Numerals(float* a, float* b, float* c) {
	cout << "Gunawardana Shiron. IS-92.\nPlease enter numbers a, b and c.\na = ";
	cin >> *a;
	cout << "b = ";
	cin >> *b;
	cout << "c = ";
	cin >> *c;
}

float MaxN(float a, float b) {
	return (a > b) ? a : b;
}

void Calculate(float a, float b, float c) {
	cout << (MaxN(a, a + b) + MaxN(a, b + c)) / (1 + MaxN(a + b * c, 1.15)) << endl;
}
