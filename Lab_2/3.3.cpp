// (Give two ways to fix this code.)
#include <iostream>
using namespace std;

// Start function
void doubleNumber(int num)
{
	num *= 2;
}

// Fixed function, pass-by-reference
void doubleNumber(int &num)
{
	num *= 2;
}

int main()
{
	int num = 35;
	doubleNumber(num);
	cout << num << '\n'; // should print 70
	return 0;
}
// At first the program prints 35
// What we can do is make num a pass-by-reference parameter