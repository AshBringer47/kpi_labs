#include <iostream>

using namespace std;

double long f_1(double long); // Function for calculating y = -2 * x^2 +3x + 6.

double long f_2(double long); // Function for calculating y = x + 2.
int main()
{
	int a = 0; // Lesser integration limit.
	int b = 2; // Upper integration limit.
	float f = 0; // Function value for every iteration.
	float k = 0; // Amount of integral.
	float x = a; // Value of x for every step.
	int n; // Amount of divisions.
	cout << "Please enter number of steps. n = ";
	cin >> n;
	if (n <= 0) {
		cout << "Wrong amount of steps." << endl;
		return 0;
	}
	float h = static_cast<float> (b - a) / n; // Amount of steps. Formula is (b - a) / n, but a = 0, so formula is b / n. 
	for (int i = 0; i <= n; i++) {
		f = 0;
		if (x == a || x == b) {
			f = (f_1(x) - f_2(x)) / 2;
		}
		f = f_1(x) - f_2(x);
		x += h;
		k += f * h;
	}
	cout << "Square of limited figure is f = " << k << "." << endl;
}

double long f_1(double long x) {
	double long y = -2 * x * x + 3 * x + 6;
	return y;
}

double long f_2(double long x) {
	double long y = x + 2;
	return y;
}
