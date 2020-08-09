#include "largest_palindrome_product.h"
#include <string>
#include <vector>
#include <algorithm>
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

void largest_palindrome_product() {
	std::vector<int> palindromic_nums;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			if (isItPalindromic(i*j)) {
				palindromic_nums.push_back(i*j);
				std::cout << i << "*" << j << " = " << i * j << " ... " << palindromic_nums.back() << "\n";
			}
		}
	}
	int max = *std::max_element(std::begin(palindromic_nums), std::end(palindromic_nums));
	std::cout << "element: " << max;
}

bool isItPalindromic(int number) {
	std::string numberAsString = std::to_string(number);

	int max_size = numberAsString.size();
	for (int i = 0; i < max_size/2; i++) {
		if (numberAsString[i] != numberAsString[max_size - 1 - i]) {
			return false;
		}
	}
	return true;
}
