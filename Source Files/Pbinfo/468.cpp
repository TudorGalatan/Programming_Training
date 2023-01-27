#include <iostream>



int main ()
{
	unsigned short int number;
	std::cin >> number;

	unsigned short int newNumber = (number / 100) * 10 + (number % 10);
	newNumber *= newNumber;
	std::cout << newNumber << '\n';

	return 0;
}