// 3.2 Basic Statistics
// Given a list of N integers, find its mean (as a double), maximum value, minimum value,
// and range. Your program will first ask for N, the number of integers in the list, which the
// user will input. Then the user will input N more numbers.

// Here is a sample input sequence:
// 3 <-- N
// 2
// 1
// 3

// Three numbers are given: 2, 1, 3. The output should be as follows:
// Mean: 2
// Max: 3
// Min: 1
// Range: 2

#include <iostream>
#include <vector> 	 // for vector
#include <algorithm> // for sort()

using namespace std;

int main()
{
	vector<int> list;
	double mean;
	int N, input, max, min, range;

	cin >> N;

	while (N-- > 0) {
		cin >> input;					 // read in input
		list.push_back(input); // push input into vector
		mean += input; 				 // add total to mean
	}

	// sort the vector from least to greatest
	// easier to work with the max/min/range
	sort(list.begin(), list.end());

	// compute values
	mean /= list.size();
	max = list[list.size()-1];
	min = list[0];
	range = max - min;

	// output
	cout << "Mean: " << mean << '\n';
	cout << "Max: " << max << '\n';
	cout << "Min: " << min << '\n';
	cout << "Range: " << range << '\n';

	return 0;
}