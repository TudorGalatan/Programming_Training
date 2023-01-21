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

	for (unsigned short int index = 0; index < numberOfNumbers - 1; index++)
	{
		std::cin >> number;

		if (number < minimumNumber)
			minimumNumber = number;
		
		if (number > maximumNumber)
			maximumNumber = number;
	}

	std::cout << maximumNumber + minimumNumber << '\n';

	return 0;
}