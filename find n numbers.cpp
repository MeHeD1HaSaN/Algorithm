// C++ program to print the first N numbers
// such that every number and the reverse
// of the number is divisible by its
// sum of digits

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits
int digit_sum(int n)
{
	int sum = 0, m;

	// Loop to iterate through every
	// digit of the number
	while (n > 0) {
		m = n % 10;
		sum = sum + m;
		n = n / 10;
	}

	// Returning the sum of digits
	return (sum);
}

// Function to calculate the reverse
// of a number
int reverse(int n)
{
	int r = 0;

	// Loop to calculate the reverse
	// of the number
	while (n != 0) {
		r = r * 10;
		r = r + n % 10;
		n = n / 10;
	}

	// Return the reverse of the
	// number
	return (r);
}

// Function to print the first N numbers
// such that every number and the reverse
// of the number is divisible by its
// sum of digits
void operation(int n)
{
	int i = 1, a, count = 0, r;

	// Loop to continuously check and
	// generate number until there
	// are n outputs
	while (count < n) {

		// Variable to hold the sum of
		// the digit of the number
		a = digit_sum(i);

		// Computing the reverse of the
		// number
		r = reverse(i);

		// Checking if the condition satisfies.
		// Increment the count and print the
		// number if it satisfies.
		if (i % a == 0 && r % a == 0) {
			cout << i << " ";
			count++;
			i++;
		}
		else
			i++;
	}
}

// Driver code
int main()
{
	int n = 10;

	operation(n);
}
