#include <iostream>
using namespace std;

const int ARRAY_LEN = 10;

int main()
{
	int arr[ARRAY_LEN] = {10}; // Note implicit initialization of
														 // other elements

	int *xPtr = arr, yPtr = arr + ARRAY_LEN - 1; // ERROR HERE: should be *yPtr
	int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1; // FIXED

	cout << *xPtr << ' ' << *yPtr << '\n'; // Should output 10 0
	return 0;
}