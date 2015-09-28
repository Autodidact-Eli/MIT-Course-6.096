&x // evaluates to the address of x in memory

*(&x) // takes the address of x and dereferences it
      // it retreives the value at that location in memory
			// thus evaluates to the same thing as x

/*
	Motivating the use of Pointers (Why should we use them?)
	 	-Pointers allow us to manipulate data much more flexibly
		-Manipulating the memory addresses of data can be more efficient than
manipulating the data itself.

	What we'll be able to do with pointers
		-More flexible pass-by-reference
		-Manipulate complex data structures efficiently, even if their data is
scattered in differ­ent memory locations
 		-Use polymorphism – calling functions on data without knowing exactly what
kind of data it is (more on polymorphism later)

	Pointers are just variables storing integers- but those integers happen to be
memory addresses, usually addresses of other variables.
	A pointer that stores the address of some variable x is said to "point to x"
	We can access the value of x by dereferencing that pointer
	As with arrays, its often helpful to visualize pointers by using a row of
adjacent cells to represent memory locations
*/

/* Declaring Pointers */

// To declare a pointer variable named 'ptr' that points to an integer
// variable named 'x'
int *ptr = &x;
/*
int *ptr declares the pointer to an integer value, which we are initializing to
the address of 'x'
*/

// We can ave pointers to values of any type
// The general scheme for declaring pointers is:
data_type *pointer_name
//pointer_name is then a variable of type 'data_type' *
// a "pointer to a data_type value"

// To declare a pointer variable named 'ptr' that points to an integer
// variable named 'x'
int *ptr = &x;

cout << *ptr; // Prints the value pointed to by ptr
							// which in the above example would be x's value

*ptr = 5; 		// sets the value of x

// Without the * operator, the identifer x refers to the pointer itself, not the
// value it points to
cout << ptr; 	// outputs the memory address of x in base 16

/*
	There are two places the 'const' keyword can be placed within a pointer
	variable declaration.  This is because there are two different variables whose
	values you might want to forbit changing:
	(1) The pointer itself
	(2) The value it points to
*/

const int *ptr; // declares a changeable pointer to a constant integer
								// the integer value cannot be changed through this pointer, but
								// the pointer may be changed to point to a different constant
								// integer


int * const ptr; // declares a constant pointer to changeable integer data
								 // the integer value can be changed through this pointer, but
								 // the pointer may not be changed to point to a differnet
								 // constant integer

const int * const ptr; // forbits changing either the address ptr contains or
											 // the value it points to

/* Read it backwards */
int* // pointer to int
int const * // pointer to const int
int * const // const pointer to int
int const * const // const pointer to const int

// first const can be on either side of the type
const int * == int const*
const int * const = int const * const

/*
	A rule of thumb which may help to discover whether 'const' applies to a pointer
	or to pointed data:

	-Split the statement at asterix sign

	-If the const keyword appears in the left part
	 e.g. const int * foo - it belongs to pointed data

	-If the const keyword appears in the right part
	 e.g. int * const bar - it's about the pointer
*/



