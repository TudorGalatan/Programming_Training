#include <iostream>



int main ()
{
	unsigned short int year;
	std::cin >> year;

	bool leapYear = ((year % 4 == 0 && year % 100) || (year % 400 == 0)) ? true : false;

	if (!leapYear)
		std::cout << "ne";

	std::cout << "bisect\n";

	return 0;
}