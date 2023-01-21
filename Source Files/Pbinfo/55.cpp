#include <iostream>

using namespace std;



int main ()
{
	int number;
	std::cin >> number;

	int minimumNumber = 1000000;

	while (number != 0)
	{
		if (number > 0 && number < minimumNumber)
			minimumNumber = number;

		std::cin >> number;
	}

	if (minimumNumber == 1000000)
		std::cout << "NU EXISTA";
	else
		std::cout << minimumNumber;

	std::cout << '\n';

	return 0;
}