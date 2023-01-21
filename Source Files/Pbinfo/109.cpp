#include <iostream>

using namespace std;



int main ()
{
	unsigned int number;

	std::cin >> number;

	std::cout << number << " este ";

	if (number % 2)
		std::cout << "im";

	std::cout << "par\n";

	return 0;
}