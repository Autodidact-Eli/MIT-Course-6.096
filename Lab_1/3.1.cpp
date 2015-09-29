#include <iostream>

using namespace std;

/*
1. Below is a sample program. Use it to answer the following question: What happens if
we declare the same name twice within a block, giving it two different meanings?
*/
int main() {
	int arg1;
	arg1 = -1;
	int x, y, z;
	char myDouble = '5';
	char arg1 = 'A';
	cout << arg1 << "\n";
	return 0;
}

/*
Hints: Did your program compile? If so, what does it print? If not, what error message
do you get?
*/

/*
This program did not compile after % g++ -Wall prog_name -o prog_name
There were warnings with conflicting declarations with arg1, since it
was originally declared as a char, then later declared as an int.  Also
the int variables x, y, and z had warnings since they were unused; also the
same warnings with char myDouble.
*/