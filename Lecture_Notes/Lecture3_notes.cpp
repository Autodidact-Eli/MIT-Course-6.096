/*
Why define your own functions?
• Readability: sqrt(5) is clearer than copy-pasting in an algorithm to compute the square root
• Maintainability: To change the algorithm, just change the function
(vs changing it everywhere you ever used it)
• Code reuse: Lets other people use algorithms you’ve implemented
*/

// result = base^exponent
int raiseToPower(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; ++i) {
		result *= base;
	}
	return result;
}

// Up to one value may be returned; it must be the same
// type as the return type

int foo() {
	return "Hello"; // error
}

char* foo() {
	return "Hello"; // ok
}

// If no values are returend, give the function a 'void' return type
void printNum(int num) {
	cout << "The number is " << num << '\n';
}

// Function overloading
// Functions with the same name but different arguments
// The function called is the one whose arguments
// match the invocation
void printOnNewLine(int x) {
	cout << "Integer: " << x << '\n';
}
void printOnNewLine(char* x) {
	cout << "String: " << x << '\n';
}

// Function declarations need to occur before invocations
int foo() {
	return bar()*2; //ERROR - bar hasn't been declared yet
}
int bar() {
	return 3;
}
// Solution 1: reorder function declarations
int bar() {
	return 4;
}
int foo() {
	return bar()*2; // ok
}

// Solution 2: use a function prototype
// A function prototype informs the compiler
// that you'll implement it later
int bar(); // function prototype

int foo() {
	return bar()*2; // ok
}
int bar() {
	return 3;
}

// Function prototypes should match the signature of the method
// though argument names don't matter
int square(int); // function prototype

int cube(int x) {
	return x*square(x);
}
int square(int x) {
	return x*x;
}

// Function prototypes are generally put into seperate header files

// myLib.h - header
// contains prototypes
int square(int);
int cube(int);

// myLib.cpp - implementation
#include "myLib.h"
int cube(int x) {
	return x*square(x);
}
int square(int x) {
	return x*x;
}

/*
Recursion
• Functions can call themselves.
• fib(n) = fib(n-1) + fib(n-2) can be easily
expressed via a recursive implementation
*/
int fib(int x) {
	if (n == 0 || n == 1) {
		return 1; // base case
	} else {
		return fib(n-2) + fib(n-1); // recursive call
	}
}

/* Pass by value vs. Pass by reference */

// pass-by-value
void increment(int a) {
	++a;
	cout << "a in increment " << a << '\n';
}
int main() {
	int q = 3;
	increment(q); // does nothing
	cout << "q in main " << q << '\n';
}
// Output
// a in increment 4
// q in main 3

// pass-by-reference
void increment(int &a) {
	++a;
	cout << "a in increment " << a << '\n';
}
int main() {
	int q = 3;
	increment(q); // works
	cout << "q in main " << q << '\n';
}
// Output
// a in increment 4
// q in main 4


// Implementing swap
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int q = 3;
	int r = 5;
	cout << "Before swap, q: " << q << ", r: " << r << '\n';
	swap(q, r);
	cout << "After swap, q: " << q << ", r: " << r << '\n';
}

/*
Libraries
• Libraries are generally distributed as the header file
containing the prototypes, and a binary .dll/.so file containing
the (compiled) implementation
– Don’t need to share your .cpp code
• Library user only needs to know the function prototypes (in
the header file), not the implementation source code (in the
.cpp file)
*/