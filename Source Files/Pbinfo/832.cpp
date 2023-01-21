#include <iostream>

using namespace std;



int main ()
{
	unsigned short int grade;

	std::cin >> grade;

	if (grade < 5)
		std::cout << "corigent";
	else
		std::cout << "promovat";

	std::cout << '\n';

	return 0;
}