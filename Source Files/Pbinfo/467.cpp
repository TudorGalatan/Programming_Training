#include <iostream>



int main ()
{
	unsigned short int number;
	std::cin >> number;

	unsigned short int newNumber = (number / 100) * (number % 10);
	std::cout << newNumber << '\n';

	return 0;
}