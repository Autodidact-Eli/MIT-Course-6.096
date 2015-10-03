// This is a comment

/*
  This is a multi-line comment
*/

// Here are some keywords
// keywords have a special meaning to the compiler
int, double, for, auto

// Here are some literals
"I'm a string", 24.3, 12, 'c'

// Here are some operators
// e.g. mathematical or logical operations
+,-,&&,%,<<

// Type char, size of 1 byte
// single text character or small integer
// indicated with single quotes
'a','3'
signed char some_char; // range -128 to 127
unsigned char some_other_char; // range 0 to 225

// Type int, size of 4 bytes
int a = 5;
signed int some_int; // range -2147483648 to 2147483647
unsigned int some_other_int; // range 0 to 4294967295

// Type bool, size of 1 byte
// bool values are either true(1) or false(0)
// indicated by keywords true or false
bool some_bool = true;
bool some_other_bool = false;

// Type double, size of 8 bytes
// "doubly" precise floating point number
double some_double; // range +/-1.7e +/-308 (15 digits)

// A signed integer is one that can represent a negative number
// An unsigned integer will never be interpreted as negative, so it
// can represent a wider range of positive numbers

// There are 3 integer types: short, int, long
// There are 3 floating point types: float, double, long double

// Demonstrating both a variable declaration and initialization
int x = 4 + 2;