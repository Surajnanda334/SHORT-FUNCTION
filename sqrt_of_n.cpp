#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

// Recursive function that returns square root
double Square(double n, double i, double j)
{
	double mid = (i + j) / 2;
	double mul = mid * mid;

	// If mid itself is the square root,
	// return mid
	if ((mul == n) || (abs(mul - n) < 0.00001))
		return mid;

	// If mul is less than n, recur second half
	else if (mul < n)
		return Square(n, mid, j);

	// Else recur first half
	else
		return Square(n, i, mid);
}

// Function to find the square root of n
void findSqrt(double n,int precision)
{
	double i = 1;

	// While the square root is not found
	bool found = false;
	while (!found) {

		// If n is a perfect square
		if (i * i == n) {
			cout << fixed << setprecision(0) << i;
			found = true;
		}
		else if (i * i > n) {

			// Square root will lie in the interval i-1 and i
			double res = Square(n, i - 1, i);
			cout << fixed << setprecision(precision) << res;
			found = true;
		}
		i++;
	}
}

int main()
{
	double n = 90;
  int precision=6;

	findSqrt(n,precision);

	return 0;
}
