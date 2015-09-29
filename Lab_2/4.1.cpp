#include <iostream>
using namespace std;

// Write a single function that returns the sum of two integers.
// Also write the equivalent function for taking the sum of two doubles.
int sum(const int x, const int y)
{
	return x + y;
}

double sum(const double x, const double y)
{
	return x + y;
}

int main()
{
	int a = 5, b = 5;
	double c = 3.3, d = 3.3;

	cout << "5 + 5 = " << sum(a,b) << '\n';
	cout << "3.5 + 3.5 = " << sum(c,d) << '\n';
	return 0;
}
