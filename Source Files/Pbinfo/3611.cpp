#include <iostream>



int main ()
{
	unsigned short int number;
	std::cin >> number;

	unsigned short int thirdDigit = number % 10;
	unsigned short int secondDigit = (number / 10) % 10;
	unsigned short int firstDigit = number / 100;

	unsigned short int sumOfNumbers = number;
	sumOfNumbers += firstDigit * 100 + thirdDigit * 10 + secondDigit;
	sumOfNumbers += secondDigit * 100 + firstDigit * 10 + thirdDigit;
	sumOfNumbers += secondDigit * 100 + thirdDigit * 10 + firstDigit;
	sumOfNumbers += thirdDigit * 100 + firstDigit * 10 + secondDigit;
	sumOfNumbers += thirdDigit * 100 + secondDigit * 10 + firstDigit;

	std::cout << sumOfNumbers << '\n';

	return 0;
}