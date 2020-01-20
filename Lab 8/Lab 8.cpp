#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>

using namespace std;

int** inputMatrix(int*, int*); // Генерує матрицю n на m.
void outputMatrix(int**, int, int); // Виводить на екран матрицю n на m.
int maxRow(int**, int, int); // Знаходження найбільшого елемента рядка.
int multiplyMatrix(int** p, int, int); // Виконує скалярне множення рядків та стовпчиків.
void processing(int**, int, int); // Виконує основне завдання: створює вектор із елементів, що базуются на елементах матриці.
void removeMatrix(int**, int); // Видаляє пам'ять, виділену для матриці.

int main() {
	int rows, cols; // Кількість рядків та 
	int** p; // Показник на двомірний масив.
	p = inputMatrix(&rows, &cols);
	outputMatrix(p, rows, cols);
	processing(p, rows, cols);
	removeMatrix(p, rows);
}

int** inputMatrix(int* rows, int* cols) {
	srand(time(0));
	cout << "Gunawardana Shiron. IS-92.\nRows = ";
	cin >> *rows;
	cout << "Cols = ";
	cin >> *cols;
	int** a = new int *[*rows];
	for (int i = 0; i < *rows; i++) {
		a[i] = new int[*cols];
	}
	for (int i = 0; i < *rows; i++) {
		for (int j = 0; j < *cols; j++) {
			a[i][j] = rand() % 100 + 1;
		}
	}
	return a;
}

void outputMatrix(int** p, int rows, int cols) {
	cout << "================================================================" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << setw(5) << p[i][j];
		}
		cout << endl;
	}
	cout << "================================================================" << endl;
}

int maxRow(int** p, int row, int cols) {
	int index = 0; // Номер максимального елемента рядка.
	int max = p[row][index];
	for (int i = 0; i < cols; i++) {
		if (max < p[row][i]) {
			max = p[row][i];
			index = i;
		}
	}
	return index;
}

int multiplyMatrix(int** p, int row, int cols) {
	int element = 0; // Результат множення.
	for (int i = 0; i < cols; i++)
		element += p[row][i] * p[i][maxRow(p, row, cols)];
	return element;
}

void processing(int** p, int rows, int cols) {
	cout << "================================================================" << endl;
	vector<int> matrixVector; // Створюємо вектор.
	for (int i = 0; i < rows; i++) {
		cout << "The largest number of " << (i + 1) << " row is " << p[i][maxRow(p, i, rows)] << "."<< endl;
		matrixVector.push_back(multiplyMatrix(p, i, rows));
		}
	cout << "Vector X = ";
	for (int i = 0; i < rows; i++) {
		cout << setw(6) << matrixVector[i];
	}
	matrixVector.clear();
	cout << "\n================================================================" << endl;
}

void removeMatrix(int** p, int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] p[i];
	}
	delete[] p;
}