#include <iostream>

using namespace std;



int main ()
{
	unsigned short int firstCapacity, secondCapacity, firstNumberOfTrucks, secondNumberOfTrucks, numberOfDays;

	std::cin >> firstCapacity >> secondCapacity >> firstNumberOfTrucks >> secondNumberOfTrucks >> numberOfDays;

	unsigned int totalCapacity = numberOfDays * (firstNumberOfTrucks * firstCapacity + secondNumberOfTrucks * secondCapacity);

	std::cout << totalCapacity << '\n';

	return 0;
}