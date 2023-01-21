#include <iostream>

using namespace std;



int main ()
{
	unsigned short int leftSide, rightSide, number;

	std::cin >> leftSide >> rightSide >> number;

	if (number >= leftSide && number <= rightSide)
		std::cout << "DA";
	else
		std::cout << "NU";

	std::cout << '\n';

	return 0;
}