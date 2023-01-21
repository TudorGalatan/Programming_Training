#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	int number;
	std::cin >> number;

	int minimumNumber = number;

	for (unsigned short int index = 0; index < numberOfNumbers - 1; index++)
	{
		std::cin >> number;

		if (number < minimumNumber)
			minimumNumber = number;
	}

	std::cout << minimumNumber << '\n';

	return 0;
}