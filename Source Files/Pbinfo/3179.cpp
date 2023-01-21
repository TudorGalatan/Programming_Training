#include <iostream>
#include <cmath>

using namespace std;



int main ()
{
	unsigned short int numberOfAlleys;

	std::cin >> numberOfAlleys;

	unsigned int numberOfBirds = pow(numberOfAlleys, 5);

	std::cout << numberOfBirds << '\n';

	return 0;
}