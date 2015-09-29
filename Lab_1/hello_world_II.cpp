#include <iostream>

using namespace std;
/*
Write a program that outputs “Hello, World!” n times
(where n is a nonnegative integer that the user will input) with:
• a for loop.
• a while loop.
• a do...while loop.
*/
int main() {
	int n;
	cin >> n;

	// using a for loop
	for (int i = 0; i < n; ++i) {
		cout << "Hello, World!\n";
	}

	// using a while loop
	while (n-- > 0) {
		cout << "Hello, World!\n";
	}

	// using a do...while loop
	do {
		if (n <= 0) break;
		cout << "Hello, World!\n";
	} while (n-- > 0);

	return 0;
}