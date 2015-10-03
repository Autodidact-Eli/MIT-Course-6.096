// An array is a fixed number of elements of the same type stored sequentially
// in memory.

// The size of the array is referred to as it dimension.

// To declare an integer array named 'arr' of four elements
int arr[4];

// These elements of an array can be accessed by using an 'index' into the array.
// Arrays in C++ are zero-indexed, meaning the first element has an index of 0.

arr[0] = 6; // 1st element
arr[1] = 0; // 2nd element
arr[2] = 9; // 3rd element
arr[3] = 6; // 4th element

// Another way to initialize some or all values at the time of declaration
int arr[4] = {6,0,9,6};

// Note that when accessing an array, the index given must be a positive integer
// from 0 to n-1, where n is the dimension of the array.

// Arrays can also be passed as arguments to functions.  When declaring the
// function, simply specify the array as a parameter.  The array can then be used
// as normal within the function.

// The function sum takes a constant integer array and a constant integer length as its arguments
// and adds up length elements in the array. It then returns the sum, and the program prints out
// Sum: 28.

int sum(const int array[], const int length)
{
  long sum = 0;
  for (int i = 0; i < length, sum += array[i++]);
  return sum;
}

int main()
{
  int arr[] {1,2,3,4,5,6,7};
  cout << "Sum: " << sum(arr, 7) << '\n';
  return 0;
}

// It is important to note that arrays are passed by reference and so any changes
// made to the array within the function will be observed in the calling scope.

// C++ also supports the creation of multidimensional arrays, through the addition
// of more than one set of brackets.

int twoDimArray[2][4];

// The two-dimensional array can also be initialized at declaration like so
int twoDimArray[2][4] = { {6,0,9,6}, {2,0,1,5} };

// Note that dimensions must always be provided when initializing multidimensional
// arrays, as it is otherwise impossible for the compiler to determine what the
// intended element partitioning is. For the same reason, when multidimensional
// arrays are specified as arguments to functions, all dimensions but the first
// must be provided (the first dimension is optional)

int func(int arr[][4])
{
  /* code */
}

// String literals such as “Hello, world!” are actually represented by C++ as a
// sequence of characters in memory. In other words, a string is simply a character
// array and can be manipulated as such.

int main()
{
  char helloworld[] = {
    'H', 'e', 'l', 'l', 'o', ',', ' ',
    'w', 'o', 'r', 'l', 'd', '!', '\0'
  };

  cout << helloworld << '\n';
  return 0;
}
// This program prints Hello, world!

// Character arrays can also be initialized using string literals
char helloworld[] = "Hello, world!";

// The individual characters in a string can be manipulated either directly by the
// programmer or by using special functions provided by the C/C++ libraries. These
// can be included in a program through the use of the #include directive. Of
// particular note are the following:
// • cctype (ctype.h): character handling
// • cstdio (stdio.h): input/output operations
// • cstdlib (stdlib.h): general utilities
// • cstring (string.h): string manipulation