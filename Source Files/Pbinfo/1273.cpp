#include <iostream>

using namespace std;



int main ()
{
	unsigned int firstNumber, secondNumber;

	std::cin >> firstNumber >> secondNumber;

	unsigned int sumOfNumbers = firstNumber + secondNumber;
	unsigned int lastDigitOfSum = sumOfNumbers % 10;

	std::cout << lastDigitOfSum << '\n';

	return 0;
}