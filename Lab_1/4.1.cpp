// Factorials Gone Wrong
// This section focuses on debugging programs. We will start off with a simple factorial program
// and do a step by step troubleshooting routine.

// 4.1 Writing the factorial program
// Here is the code for a factorial program. Copy it into your IDE and verify that it compiles.
// -->It compiled using g++ -Wall

// 4.2 Breaking the program
// Run the program and enter −1. What happens? How can you change the code such that it
// won’t exhibit this behavior?

// The output was 1, factorials are not defined for negative numbers

// 4.3 Breaking the program II
// Try entering some larger numbers. What is the minimum number for which your modified
// program from 4.2 stops working properly? (You shouldn’t have to go past about 25. You
// may find Google’s built-in calculator useful in checking factorials.) Can you explain what
// has happened?

// 17 was the last number I entered before the program stopped working.
// We assigned the number as a short, so it overflowed into a negative, assigning our
// number to a larger data type such as int or long should keep our program from breaking
// on large inputs

#include <iostream>

using namespace std;

long long accumulator = 1;

int main()
{
  int number;
  cout << "Enter a number: ";
  cin >> number;

  if (number < 0) {
    cout << "No negative inputs.\n";
    return 1;
  }

  if (number > 16) {
    cout << "Program will not produce correct result!\n";
  }

  cout << "The factorial of " << number << " is ";
  for (; number > 0; accumulator *= number--);
  cout << accumulator << "\n";

  return 0;
}