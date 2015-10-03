#include <iostream>

using namespace std;

// It's often useful to specify that arguments to a function should be treated
// as constants, as with regular variables, we can declare function arguments
// to be const
void print(const int n)
{
  cout << n << '\n';
}

void print(const long &x) // pass-by-reference avoids overhead
{                         // of copying large number
  cout << n << '\n';
}

int main()
{
  long x = 234923592;
  print(x);           // We are guaranteed that x
                      // will not be changed by this
  return 0;
}

// In general, if you know a value shouldn't be changing (particularly in a
// function argument), you should declare it 'const'.  That way, the compiler
// can catch you if you messed up and tried to change it somewhere.