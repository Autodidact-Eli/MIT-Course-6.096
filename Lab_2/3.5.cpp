#include <iostream>
using namespace std;

// Start(Bad) function, function needs a third parameter
int sum(const int x, const int y)
{
	return x + y;
}

// Fixed function, added third parameter
int sum(const int x, const int y, const int z)
{
	return x + y + z;
}

int main()
{
	cout << sum(1,2,3) << '\n'; // should print 6
	return 0;
}