#include <iostream>

using namespace std;

/*
2. Below is a sample program. Use it to answer the following question: What happens if
we declare an identifier in a block, and then redeclare that same identifier in a block
nested within that block?
*/
int main() {
	int arg1;
	arg1 = -1;
	{
		char arg1 = 'A';
		cout << arg1 << "\n";
	}
	return 0;
}

/*
Hints: Did your program compile? If it does, what does the program output? If not,
what error message does it produce?
*/

/*
This program did comiple, although there were comipler warnings of int arg1 not being used.
The output was: A
*/