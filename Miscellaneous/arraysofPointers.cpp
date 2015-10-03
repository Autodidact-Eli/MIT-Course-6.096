#include <iostream>

using namespace std;

// Arrays can contain any type of value, including pointers
// One common application of this is arrays of strings, e.g. arrays of char *'s
int main()
{
  const char *suitNames[] = {"Clubs", "Diamonds", "Spades", "Hearts"};

  cout << "Enter a suit number (1-4): ";
  unsigned int suitNum;
  cin >> suitNum;

  if (suitNum <= 4)
  cout << suitNames[suitNum-1] << '\n';

  return 0;
}