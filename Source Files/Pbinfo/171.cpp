#include <iostream>

using namespace std;

unsigned short int getFirstDigit (unsigned int number);



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int number;
	std::cin >> number;

	unsigned short int smallestFirstDigit = getFirstDigit(number);
	unsigned int biggestNumber = number;

	for (unsigned short int index = 0; index < numberOfNumbers - 1; index++)
	{
		std::cin >> number;

		unsigned short int firstDigit = getFirstDigit(number);

		if (firstDigit < smallestFirstDigit)
		{
			smallestFirstDigit = firstDigit;
			biggestNumber = number;
		}
		else if (firstDigit == smallestFirstDigit && number > biggestNumber)
			biggestNumber = number;
	}

	std::cout << biggestNumber << '\n';

	return 0;
}



unsigned short int getFirstDigit (unsigned int number)
{
	while (number / 10)
		number /= 10;

	return number;
}