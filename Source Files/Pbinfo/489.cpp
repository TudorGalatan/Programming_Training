#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned short int numbers[999];
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		std::cin >> numbers[index];

	for (unsigned short int index = 0; index < numberOfNumbers / 2; index++)
		std::cout << numbers[index] << ' ' << numbers[numberOfNumbers - index - 1] << ' ';

	if (numberOfNumbers % 2)
		std::cout << numbers[numberOfNumbers / 2];

	std::cout << '\n';

	return 0;
}