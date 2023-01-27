#include <iostream>



int main ()
{
	unsigned short int number;
	std::cin >> number;

	unsigned short int sumOfDigits = (number / 10) + (number % 10);
	std::cout << sumOfDigits << '\n';

	return 0;
}