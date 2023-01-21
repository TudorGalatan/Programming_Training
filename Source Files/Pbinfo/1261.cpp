#include <iostream>

using namespace std;



int main ()
{
	int number;
	unsigned int numberOfEvenNumbers = 0;
	
	std::cin >> number;

	while (number)
	{
		if (number % 2 == 0)
			numberOfEvenNumbers++;

		std::cin >> number;
	}

	if (numberOfEvenNumbers)
		std::cout << numberOfEvenNumbers;
	else
		std::cout << "NU EXISTA";

	std::cout << '\n';

	return 0;
}