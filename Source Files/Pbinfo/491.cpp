#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int firstIndex = 0, lastIndex = 0;
	bool found = 0;

	unsigned int numbers[999];
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
	{
		std::cin >> numbers[index];

		if (numbers[index] % 2 == 0)
			if (!found)
			{
				firstIndex = index;
				found = 1;
			}
			else
				lastIndex = index;
	}

	unsigned int sumOfNumbers = 0;
	for (unsigned short int index = firstIndex; index <= lastIndex; index++)
		sumOfNumbers += numbers[index];

	if (found)
		std::cout << sumOfNumbers;
	else
		std::cout << "NU EXISTA";

	std::cout << '\n';

	return 0;
}