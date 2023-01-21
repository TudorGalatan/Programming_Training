#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfGirls, numberOfBoys, numberOfDays;

	std::cin >> numberOfGirls >> numberOfBoys >> numberOfDays;

	unsigned int totalNumberOfPages = (numberOfGirls * 3 + numberOfBoys * 2) * numberOfDays;

	std::cout << totalNumberOfPages << '\n';

	return 0;
}