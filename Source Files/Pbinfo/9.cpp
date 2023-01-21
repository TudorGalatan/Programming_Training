#include <iostream>

using namespace std;



int main ()
{
	unsigned int firstNumber, secondNumber, thirdNumber;
	
	std::cin >> firstNumber;
	
	unsigned int minimumNumber, maximumNumber;
	minimumNumber = maximumNumber = firstNumber;

	std::cin >> secondNumber;

	if (secondNumber > maximumNumber)
		maximumNumber = secondNumber;
	if (secondNumber < minimumNumber)
		minimumNumber = secondNumber;

	std::cin >> thirdNumber;

	if (thirdNumber > maximumNumber)
		maximumNumber = thirdNumber;
	if (thirdNumber < minimumNumber)
		minimumNumber = thirdNumber;

	std::cout << maximumNumber - minimumNumber << '\n';

	return 0;
}