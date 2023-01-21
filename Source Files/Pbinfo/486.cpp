#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned short int number;
	std::cin >> number;

	unsigned short int minimumNumber, maximumNumber;
	minimumNumber = maximumNumber = number;

	for (unsigned short int index = 0; index < numberOfNumbers - 1; index++)
	{
		std::cin >> number;

		if (number > maximumNumber)
			maximumNumber = number;

		if (number < minimumNumber)
			minimumNumber = number;
	}

	std::cout << minimumNumber << ' ' << maximumNumber << '\n';

	return 0;
}