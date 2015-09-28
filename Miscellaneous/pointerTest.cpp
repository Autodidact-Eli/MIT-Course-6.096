#include <iostream>
#include <string>

using namespace std;

void squareByPtr(int *numPtr) {
	*numPtr = (*numPtr) * (*numPtr);
}

int main() {
	int x = 5; 					// starting point

	cout << x << '\n'; 	// prints 5
	cout << &x << '\n'; // prints memory address of x

	squareByPtr(&x);

	cout << x << '\n'; 	// prints 25
	cout << &x << '\n'; // prints memory address of x

	return 0;
}