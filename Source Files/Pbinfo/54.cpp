#include <iostream>

using namespace std;



int main ()
{
	int number;

	std::cin >> number;

	if (number == 0)
		std::cout << "NU EXISTA";
	else
	{
		int maximumNumber = number;

		while (number)
		{
			if (number > maximumNumber)
				maximumNumber = number;

			std::cin >> number;
		}

		std::cout << maximumNumber;
	}

	std::cout << '\n';

	return 0;
}