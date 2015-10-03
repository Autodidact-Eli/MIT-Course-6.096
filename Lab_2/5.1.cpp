#include <iostream>
#include <cstdlib>  // C standard library
                    // defines rand(), srand(), RAND_MAX
#include <cmath>    // C time functions - defines time()

double pi(int num_dart_throws)
{
  int seed = srand(time(num_dart_throws));
}

int main()
{
  double x_coord = rand(0,1);
  double y coord = rand(0,1);

  int count = 0; // how many darts have ended up inside the circle
}