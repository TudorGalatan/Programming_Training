#include <iostream>

using namespace std;



int main ()
{
	unsigned short int number;

	std::cin >> number;

	unsigned short int currentNumber = 1;
	unsigned long long int product = 1;

	while (number)
	{
		product *= currentNumber;
		currentNumber += 2;
		number--;
	}
		
	std::cout << product << '\n';

	return 0;
}