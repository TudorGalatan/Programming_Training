#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned short int numberOfOddNumbers = 0, numberOfEvenNumbers = 0;

	for (unsigned short int index = 0; index < numberOfNumbers; index++)
	{
		unsigned int number;
		std::cin >> number;

		if (number % 2)
			numberOfOddNumbers++;
		else
			numberOfEvenNumbers++;
	}

	unsigned short int difference;
	if (numberOfOddNumbers > numberOfEvenNumbers)
		difference = numberOfOddNumbers - numberOfEvenNumbers;
	else
		difference = numberOfEvenNumbers - numberOfOddNumbers;

	std::cout << difference << '\n';

	return 0;
}