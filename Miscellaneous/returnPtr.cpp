#include <iostream>
#include <cstdlib> // C standard library -
                   // defines rand(), srand(), RAND_MAX

#include <ctime>   // C time functions - defines time()

using namespace std;

// When you declare a local variable within a function, that variable goes out
// of scope when the function exits: the memory allocated to it is reclaimed
// by the operating system, and anything that was stored in that memory may
// be cleared.  It therefore ususally generates a runtime error to return
// a pointer to a local variable

int *getRandNumPtr()
{
  int x = rand();
  return &x;
}

int main()
{
  int *randNumPtr = getRandNumPtr();
  cout << *randNumPtr << '\n'; // ERROR
  return 0;
}