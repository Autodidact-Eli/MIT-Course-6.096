// (Give two ways to fix this code.)
#include <iostream>
using namespace std;

void printNum()
{
  cout << number;
};

int main()
{
  int number = 35;
  printNum(number);
  cout << '\n';
  return 0;
}

// Solution 1, make the function printNum() take an argument of int type
// (preferable because it avoids use of global variables)

// Solution 2, move the int number declaration to a global variable