#include <iostream>
#include <cstdlib> 	// contains some math functions
using namespace std;

// Start(bad) function, function doesn't return anything
int difference(const int x, const int y)
{
	int diff = abs(x-y); // abs(n) returns absolute value of n
}

// Fixed function, function now returns the absolute difference
int difference(const int x, const int y)
{
	int diff = abs(x-y); // abs(n) returns absolute value of n
	return diff;
}

int main()
{
	cout << difference(24, 1238) << '\n';
	return 0;
}