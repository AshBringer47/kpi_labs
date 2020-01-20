#include <iostream>
#include <string>
#include "stringSort.h"

using namespace std;

int main() {
	string str;
	cout << "Gunawardana Shiron. IS-92.\nEnter words: ";
	getline(cin, str);

	cout << "Result string: " << stringSort(str) << "\n\n";

	system("pause");
	return 0;
}