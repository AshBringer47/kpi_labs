#include <iostream>
#include <cmath>

using namespace std;

int amount(int number) { // Finds amount of numerals.
	int count = 0;
	while (number > 0) {
		count++;
		number /= 10;
	}
	return count;
}

int main()
{
	int a;
	int number; // Last numeral, we are checking.
	cout << "Gunawardana Shiron. IS-92.\nPlease enter the last number, you want to check till. Number = ";
	cin >> number;
	if (number <= 0) {
		cout << "Number must be more then 0 and integral.\n";
		return 0;
	}
	for (int i = 1; i <= number; i++) {
		a = pow(10, amount(i)); // Power in 10 equal to the value of numvers.
		if (i == (i * i) % a) // Task checker.
			cout << "Such number is = " << i << "." << endl;
	}
	cout << "That's all.\n";
	return 0;
}
