#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int number;
	std::cin >> number;

	unsigned int minimumNumber, maximumNumber;
	minimumNumber = maximumNumber = number;

	unsigned short int minimumIndex = 1, maximumIndex = 1;

	for (unsigned short int index = 0; index < numberOfNumbers - 1; index++)
	{
		std::cin >> number;

		if (number > maximumNumber)
		{
			maximumNumber = number;
			maximumIndex = index + 2;
		}

		if (number < minimumNumber)
		{
			minimumNumber = number;
			minimumIndex = index + 2;
		}
	}

	std::cout << minimumIndex << ' ' << maximumIndex << '\n';

	return 0;
}