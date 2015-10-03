// We can have pointers to any type, including pointers to pointers.  This is
// commonly used in C (and less commonly in C++) to allow functions to set the
// values of pointers in their calling functions

#include <iostream>

using namespace std;

void setString(char **strPtr)
{
  int x;
  cin >> x;

  if (x < 0)
    *strPtr = "Negative!";
  else
    *strPtr = "Nonnegative!";
}

int main()
{
  char *str;
  setString(&str);
  cout << str;     // string has been set to setString
  cout << endl;
  return 0;
}