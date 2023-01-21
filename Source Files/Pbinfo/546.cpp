#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned int numbers[999];
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		std::cin >> numbers[index];

	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		if (numbers[index] % numbers[numberOfNumbers - 1] == 0)
			std::cout << numbers[index] << ' ';

	std::cout << '\n';

	return 0;
}