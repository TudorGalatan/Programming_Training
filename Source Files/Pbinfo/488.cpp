#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfNumbers;
	std::cin >> numberOfNumbers;

	unsigned short int numbers[999];
	for (unsigned short int index = 0; index < numberOfNumbers; index++)
		std::cin >> numbers[index];

	for (unsigned short int index = 1; index < numberOfNumbers; index += 2)
		std::cout << numbers[index] << ' ';

	std::cout << '\n';

	unsigned short int startIndex = numberOfNumbers - 1;
	if (numberOfNumbers % 2 == 0)
		startIndex--;

	for (short int index = startIndex; index >= 0; index -= 2)
		std::cout << numbers[index] << ' ';

	std::cout << '\n';

	return 0;
}