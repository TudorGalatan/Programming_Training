#include <iostream>



int main ()
{
	unsigned short int english, french;
	std::cin >> english >> french;

	// The formula is: 100 - (100 - english) - (100 - french), if english + french > 100, otherwise 0.
	// The simplified formula is: english + french - 100, if english + french > 100, otherwise 0.
	unsigned short int englishAndFrench = english + french;

	if (englishAndFrench > 100)
		englishAndFrench -= 100;
	else
		englishAndFrench = 0;

	std::cout << englishAndFrench << '\n';

	return 0;
}