#include <iostream>

using namespace std;

// Write a function printArray to print the contents of an integer array with
// the string ", " between elements (but not after the last element)
void printArray(const int array[], const int length)
{
	for (int i = 0; i < length - 1; ++i) {
		cout << array[i] << ", ";
	}
	cout << array[length-1] << '\n';
}

int main()
{
	int array[] = {6,0,9,6};
	printArray(array, 4);
	return 0;
}