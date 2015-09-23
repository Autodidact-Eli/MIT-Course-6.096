/*
	Control structures are portions of program code that contain
	statements within them and, depending on the circumstances, execute
	these statements in a certain way.  There are typically two kinds:
	->conditionals and loops
*/

/*
	Conditionals allow the program to check the values of variables
	and to execute (or not execute) certain statements.
	C++ has 'if' and 'switch-case' conditional structures.
*/

/*
	Conditionals use two kinds of special operators: relational and logical.
	These are used to determine whether some condition is true(1) or false(0)
*/

// Here are some relational operators
>, >=, <, <=, ==, !=

// Here are some logical operators
&&, ||, !

// assume x = 6 and y = 2
!(x > 2) // false
(x > y) && (y > 0) // true
(x < y) && (y > 0) // false
(x < y) || (y > 0) // true

// The 'if' conditional has the form
if (condtion) {
	// if the condition evaluates to true
	// this code executes
	some_code();
}

// The if-else form is used to decide between two blocks
// If the condition is met, the first block is executed, otherwise
// the block corresponding to the 'else' is executed
// Because the condition is either satisfied or not, one of the
// blocks in an if-else statement must execute.
if (condition) {
	some_code();
} else {
	some_other_code();
}

// The else-if is used to decide between two ore more blocks
// based on multiple conditions
if (condition1) {
	some_code();
} else if (condition2) {
	more_code();
} else {
	even_more_code();
}

// The switch-case is another conditional structure
switch (expression) {
	case one:
		statementA1();
		statementA2();
		break;
	case two:
		statementB1();
		statementB2();
		break;
	default:
		statementC1();
		statementC2();
		break;
}

// Loops execute certain statements while certain conditions are met
// C++ has three kinds of loops: while, do-while, and for

// The while loop
// As long as the condition holds, the block of statements
// will be repeatedly executed.
while (condition) {
	execute_code();
}

// The do-while loop is a variation that guarantees the block of
// statements will be executed at least once
// The block of statements is executed and then, if the condition holds,
// the program returns to the top of the block
do {
	some_code();
} while (condition);

// The for loop works like the while loop but with some
// change in syntax
for (initialization; condition; incrementation) {
	some_code();
	some_more_code();
}