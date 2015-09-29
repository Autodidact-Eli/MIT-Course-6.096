// (Give two ways to fix this code.)
#include <iostream>
using namespace std;

int main()
{
	printNum(35);
	return 0;
}

void printNum(int number)
{
	cout << number << '\n';
}

// Solution 1, move implementation of the function printNum() above main
// Solution 2, create a function prototype of printNum()