#include <iostream>

using namespace std;



int main ()
{
	unsigned short int number;

	std::cin >> number;

	for (unsigned short int index = 1; index <= number; index++)
		std::cout << index << ' ';

	std::cout << '\n';

	return 0;
}