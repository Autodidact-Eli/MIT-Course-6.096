// Write a single sum funtion capable of handling an arbitrary number of integers
// It should take two arguments, include a loop, and return an integer
// (Hint: What data types can you use to represent an arbitrarly large set of
//        integers in two arguments?)
int sum(const int[] numbers, const int numbers_length)
{
  int total_sum = 0;
  for (int i = 0; i < numbers_length; ++i) {
    total_sum += numbers[i];
  }
  return total_sum;
}

// 4.6, now wrtie the same function above using recursion instead of a loop
// (Hint: Think about how pointer arithmetic may help)
int sum(const int[] numbers, const int numbers_length)
{
  if (numbers_length == 0) { // base case
    return 0;
  } else {  // TODO: implement recursive call

  }
}