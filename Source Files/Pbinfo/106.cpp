#include <iostream>

using namespace std;



int main ()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cin >> firstNumber >> secondNumber >> thirdNumber;

	if (firstNumber < secondNumber && firstNumber < thirdNumber)
		std::cout << firstNumber;
	else if (secondNumber < firstNumber && secondNumber < thirdNumber)
		std::cout << secondNumber;
	else
		std::cout << thirdNumber;

	std::cout << '\n';

	return 0;
}