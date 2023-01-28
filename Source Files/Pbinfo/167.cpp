#include <iostream>



int main ()
{
	int number;
	std::cin >> number;

	if (number > 0)
		std::cout << "pozitiv";
	else if (number < 0)
		std::cout << "negativ";
	else
		std::cout << "nul";
	
	std::cout << '\n';

	return 0;
}