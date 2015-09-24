#include <iostream>

using namespace std;

void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << "array[" << i << "] = " << array[i] << '\n';
	}
}

int main() {
	int size = 0;

	cout << "Enter an integer for size: ";
	cin >> size;

	int array[size]; // declare an array with the input as its size

	// fill array
	for (int i = 0; i < size; ++i) {
		cout << "Enter element: ";
		cin >> array[i];
	}

	printArray(array, size);

	return 0;
}