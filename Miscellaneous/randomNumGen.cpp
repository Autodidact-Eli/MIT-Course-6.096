// The C++ standard libraries include the rand() function for generating
// random numbers between 0 and RAND_MAX (an integer constant defined by compiler)
// NOTE: These numbers are not truly random
#include <iostream>
#include <cstdlib> // C standard library -
									 // defines rand(), srand(), RAND_MAX

#include <ctime>   // C time functions - defines time()

using namespace std;

int main()
{
	srand(time(0)); // set the seed
									// time(0) returns current time as a number

	int randNum = rand();
	cout << "A random number: " << randNum << '\n';
	return 0;
}







