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
void printOnNewLine(char* x) {

}