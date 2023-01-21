#include <iostream>

using namespace std;



int main ()
{
	unsigned short int number;

	std::cin >> number;

	unsigned short int currentNumber = 2;
	unsigned int product = 1;

	while (number)
	{
		product *= currentNumber;
		currentNumber += 2;
		number--;
	}
		
	std::cout << product << '\n';

	return 0;
}