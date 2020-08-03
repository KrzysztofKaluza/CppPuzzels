#include "multiples_of_3_and_5.h"

/*
PROBLEM
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/


void multiple_of_3_and_5() {
	int x = 3, y = 5, sum = 0;
	while (x < 1000)
	{
		sum += x;
		x += 3;
	}
	while (y < 1000) {
		if (y % 3 != 0) {
			sum += y;
		}
		y += 5;
	}
	cout << sum;
}