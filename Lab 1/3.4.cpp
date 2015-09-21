/*
3.4.1 Ternary operator
Write a program that loops indefinitely. In each iteration of the loop, read in an integer N
(declared as an int) that is inputted by a user, output N
5 if N is nonnegative and divisible by
5, and -1 otherwise. Use the ternary operator (?:) to accomplish this. (Hint: the modulus
operator may be useful.)
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int N;
		cin >> N;
		if (N == -1) {
			cout << "Goodbye!\n";
			break;
		}
		cout << ((N > 0 && N % 5 == 0) ? N/5 : -1) << '\n';
	}

	return 0;
}