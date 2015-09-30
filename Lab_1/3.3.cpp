// 3.3 Prime Numbers
// Write a program to read a number N from the user and then find the first N primes. A
// prime number is a number that only has two divisors, one and itself.

#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "Enter an N: ";
	cin >> N;

	for (int i = 2; i < N; ++i) {
		bool isPrime = true;
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) {
				isPrime = false;
				continue;
			}
		}
		if (isPrime) {
			cout << i << '\n';
		}
	}
	return 0;
}