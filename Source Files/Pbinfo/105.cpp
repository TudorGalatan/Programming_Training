#include <iostream>

using namespace std;



int main ()
{
	int firstNumber, secondNumber;

	std::cin >> firstNumber >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber;
	else
		std::cout << secondNumber;

	std::cout << '\n';

	return 0;
}