#include <iostream>

using namespace std;

void f(const int a = 5)
{
	cout << a*2 << " ";
}

int a = 123;

// What will the following program print out?
int main()
{
	f(1);
	f(a);
	int b = 3;
	f(b);
	int a = 4;
	f(a);
	f();
	cout << '\n';
}
// The program prints out
// 2 246 6 8 10
