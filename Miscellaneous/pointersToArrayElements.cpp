// Arrays in C++ are pointers to continuous regions in memory
// Therefore the following code is valid
const int ARRAY_LEN = 100;
int arr[ARRAY_LEN];
int *p = arr;
int *q = &arr[0];

// Now p and q point to exactly the same location as arr (e.g. arr[0]),
// and p, q, and arr can be used interchangeably.  You can also make a pointer
// to some element in the middle of an array (similarly to q)
int *z = &arr[10];