#include <iostream>

using namespace std;



int main ()
{
	unsigned short int number;

	std::cin >> number;

	while (number)
	{
		std::cout << number << ' ';
		number--;
	}
		
	std::cout << '\n';

	return 0;
}