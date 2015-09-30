#include <iostream>

using namespace std;

// Prints the elements in the array
void printArray(const int array[], const int length)
{
	for (int i = 0; i < length; ++i) {
		cout << array[i];
		if (i < length - 1)
			cout << ", ";
	}
	cout << '\n';
}

// Prints out the elements in the array in reversed order
void reverseArray(const int array[], const int length)
{
	for (int i = length-1; i >= 0; --i) {
		cout << array[i];
		if (i > 0)
			cout << ", ";
	}
	cout << '\n';
}

int main()
{
	int array[] = {1,2,3,4,5};
	cout << "Elements before reverse: ";
	printArray(array,5);
	cout << "Elements after reverse: ";
	reverseArray(array,5);
	return 0;
}