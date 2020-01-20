#include <iostream>

using namespace std;

int* arrayInput(int*); // Створює цілочисленний масив.

bool checker(int arr[], int); // Перевіряє масив на арифметичну прогресію.

int min(int arr[], int); // Знаходить мінімальний елемент масиву.

void arrayProcessing(int*, int); // Виконує основне завдання.

int main() {
	int n; // Задаємо розмір масиву.
	int* arr = arrayInput(&n);
	arrayProcessing(arr, n);
	delete[] arr; // Очистка пам'яті.
	return 0;
}

int* arrayInput(int* n) {
	cout << "Enter the value of massive.\n";
	cin >> *n; // Ініціалізуємо змінну n.
	int* arr = new int[*n]; // Створюємо цілочисельний масив.
	for (int i = 0; i < *n; i++) {
		cout << "Enter " << i + 1 << " element of array = ";
		cin >> arr[i];
	}
	return arr;
}

bool checker(int arr[], int value) {
	int d = arr[1] - arr[0]; // Задаємо різницю арифметичної прогресії.
	for (int i = 2; i < value; i++) {
		if ((arr[i] - arr[i - 1]) != d) {
			return false;
		}
	}
	return true;
}
int min(int arr[], int value) {
	int min = arr[0];
	for (int i = 1; i < value; i++) {
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

void arrayProcessing(int* array, int n) {
	int d = array[1] - array[0]; // Різниця арифметичної прогресії.
	if (checker(array, n)) {
		cout << "This is an arithmetic progression.\n"; // Якщо це арифметична прогресія.
		cout << "Difference of arithmetic progression is = " << d << ".\n";
		for (int i = 0; i < n; i += 2) {
			array[i] = d;
		}
	}
	else {
		cout << "This is not an arithmetic progression.\n"; // Якщо це не арифметична прогресія.
		cout << "The least element of progression series is " << min(array, n) << ".\n";
		for (int i = 0; i < n; i += 2) {
			array[i] = min(array, n);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " element of massive is " << array[i] << "." << endl;
	}
}