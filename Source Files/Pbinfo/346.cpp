#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int number;
	std::cin >> number;

	unsigned int maximumNumber = number;
	unsigned short int numberOfOccurrences = 1;

	for (unsigned short int index = 0; index < numberOfNumbers - 1; index++)
	{
		std::cin >> number;

		if (number > maximumNumber)
		{
			maximumNumber = number;
			numberOfOccurrences = 1;
		}
		else if (number == maximumNumber)
			numberOfOccurrences++;
	}

	std::cout << maximumNumber << ' ' << numberOfOccurrences << '\n';

	return 0;
}