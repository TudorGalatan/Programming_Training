#include <iostream>



int main ()
{
	int firstNumber, secondNumber;
	std::cin >> firstNumber >> secondNumber;

	if (firstNumber < 0 && secondNumber < 0 || firstNumber >= 0 && secondNumber >= 0)
		std::cout << "da";
	else
		std::cout << "nu";
	
	std::cout << '\n';

	return 0;
}