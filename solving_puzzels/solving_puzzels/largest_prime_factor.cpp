#include "largest_prime_factor.h"
#include <cmath>
#include <vector>

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/
/*
void largest_prime_factor() {
	long long int boundary = 600851475143;
	for (int i = 2; i < boundary; i++) {
		for (int j = 2; j <= i; j++) {
			if (i != j && i%j == 0) {
				break;
			}
			else if(i == j && i%j == 0){
				if (boundary%i == 0) {
					cout << i << "dzielnik boundary" << endl;
				}
			}
		}
	}
	cout << "END";
}
*/

//estimated time of process on my hardware is 80 minutes

void largest_prime_factor() {
	long long int boundary = 600851475143;
	double a = ceil(boundary / 2.0);
	std::vector<int> divisors;
	int last_prime_divisor = 0;
	long long int temp = (long long int)a;
	for (long long int i = 2; i < temp; i++) {
		if (boundary%i == 0) {
			cout << "dzielnik: " << i << endl;
			
			divisors.push_back(i);
		}
		if (i % 1000000000 == 0) {
			cout << "." << i;
		}
	}
	for (auto it = std::begin(divisors); it != std::end(divisors); ++it) {
		std::cout << *it << "\n";
		for (int j = 2; j <= *it; j++) {
			if (*it != j && *it%j == 0) {
				break;
			}
			else if (*it == j && *it%j == 0) {
				if (boundary%*it == 0) {
					cout << *it << "dzielnik boundary" << endl;
					last_prime_divisor = *it;
				}
			}
		}
	}
	cout << "wynik: " << last_prime_divisor << endl;
}