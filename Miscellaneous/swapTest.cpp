#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

// Program to demonstrate pass-by-reference using a swap method
int main() {
  int x, y;

  cout << "Enter a value for x: ";
  cin >> x;

  cout << "Enter a value for y: ";
  cin >> y;

  cout << "The values before swap, x = " << x << " and y = " << y << '\n';
  swap(x,y);
  cout << "The values after swap, x = " << x << " and y = " << y << '\n';
  return 0;
}