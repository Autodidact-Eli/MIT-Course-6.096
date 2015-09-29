// Program demonstrating the use of default arguments
#include <iostream>

using namespace std;

// Got compiler warnings, maybe having printNTimes(string msg, int n) is
// more preferable in new versions of C++
void printNTimes(char *msg, int n)
{
	for (int i = 0; i < n; ++i) {
		cout << msg << '\n';
	}
}

// Rather than writing printNTimes("Some message", 1); every time, C++ allows
// default arguments to be defined for a function

// Declaring the function argument as int n = 1 allows us to call the function
// with printNTimes("Some message");
// The compiler automatically inserts 1 as the second argument
void pintNTimes(char *msg, int n = 1)
{
	for (int i = 0; i < n; ++i) {
		cout << msg << '\n';
	}
}

// You may have multiple default arguments for a function
// With this we can simply write printNTimes();
void pintNTimes(char *msg = "This is a default message", int n = 1)
{
	for (int i = 0; i < n; ++i) {
		cout << msg << '\n';
	}
}


int main()
{
	printNTimes("Hello", 5);
	return 0;
}