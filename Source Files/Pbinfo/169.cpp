#include <iostream>



int main ()
{
	unsigned short int number;
	std::cin >> number;

	unsigned short int firstDigit = number / 100;
	unsigned short int secondDigit = (number / 10) % 10;
	unsigned short int thirdDigit = number % 10;

	unsigned short int sumOfSquaredDigits = firstDigit + secondDigit + thirdDigit;
	std::cout << sumOfSquaredDigits << '\n';

	return 0;
}