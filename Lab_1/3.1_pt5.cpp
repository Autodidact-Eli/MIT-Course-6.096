// 5. Below is a sample program that will not compile. Why not? By moving which line
// can we get the code to compile?

using namespace std;

int main()
{
  cout << "Hello, World!\n";
  return 0;
}

#include <iostream>

// If we moved the #include <iostream> to the top, this program will compile.
