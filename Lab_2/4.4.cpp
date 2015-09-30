#include <iostream>

using namespace std;

// Write just one function that, using default arguments, allows you to take
// the sum of anywhere between 2 and 4 integers

int sum(const int num1, const int num2, const int num3, const int num4 = 0)
{
	return num1 + num2 + num3 + num4;
}

// From 3.3
int sum(const int num1, const int num2, const int num3)
{
	return num1 + num2 + num3;
}

int main()
{
	cout << sum(3,5,7) << '\n';
	return 0;
}

// Q: What would happen if you put both this definition and the 3-argument
//    function from 3.3 into the same file, and called sum(3,5,7)?
// A: The function call is ambiguous, resulting in a compiler error