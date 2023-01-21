#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int numbers[999];
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		std::cin >> numbers[index];

	unsigned int minimumNumber, maximumNumber;
	minimumNumber = maximumNumber = numbers[0];

	for (unsigned short int index = 1; index < numberOfNumbers; index++)
	{
		if (numbers[index] < minimumNumber)
			minimumNumber = numbers[index];

		if (numbers[index] > maximumNumber)
			maximumNumber = numbers[index];
	}

	unsigned int difference = maximumNumber - minimumNumber;

	unsigned int numberOfDifferences = 0;
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		if (numbers[index] == difference)
			numberOfDifferences++;

	std::cout << numberOfDifferences << '\n';

	return 0;
}