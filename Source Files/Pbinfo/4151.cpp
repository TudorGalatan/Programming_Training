#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int numbers[999];
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		std::cin >> numbers[index];

	unsigned int minimumIndex, maximumIndex;
	minimumIndex = maximumIndex = 0;

	for (unsigned short int index = 1; index < numberOfNumbers; index++)
	{
		if (numbers[index] > numbers[maximumIndex])
			maximumIndex = index;

		if (numbers[index] < numbers[minimumIndex])
			minimumIndex = index;
	}

	unsigned short int firstIndex, secondIndex;
	if (minimumIndex > maximumIndex)
	{
		firstIndex = maximumIndex;
		secondIndex = minimumIndex;
	}
	else
	{
		firstIndex = minimumIndex;
		secondIndex = maximumIndex;
	}

	for (unsigned short int index = firstIndex; index <= secondIndex; index++)
		std::cout << numbers[index] << ' ';

	std::cout << '\n';

	return 0;
}