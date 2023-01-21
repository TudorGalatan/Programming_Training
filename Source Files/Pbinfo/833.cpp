#include <iostream>

using namespace std;



int main ()
{
	unsigned short int firstChildAge, secondChildAge;

	std::cin >> firstChildAge >> secondChildAge;

	if (firstChildAge == secondChildAge)
		std::cout << "Copiii au varste egale";
	else
	{
		unsigned short int ageDifference;

		if (firstChildAge > secondChildAge)
		{
			std::cout << "Primul";
			ageDifference = firstChildAge - secondChildAge;
		}
		else
		{
			std::cout << "Al doilea";
			ageDifference = secondChildAge - firstChildAge;
		}

		std::cout << " copil este mai mare cu " << ageDifference << " ani";
	}

	std::cout << '\n';

	return 0;
}