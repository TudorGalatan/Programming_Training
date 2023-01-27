#include <iostream>



int main ()
{
	unsigned long long int number;
	std::cin >> number;

	unsigned long long int numberOfHandshakes = (number * (number - 1)) / 2;
	std::cout << numberOfHandshakes << '\n';

	return 0;
}