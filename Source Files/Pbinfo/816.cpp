#include <iostream>

using namespace std;



int main ()
{
	unsigned int firstCapacity, secondCapacity;

	std::cin >> firstCapacity >> secondCapacity;

	unsigned int numberOfBottles = secondCapacity / firstCapacity;

	if (secondCapacity % firstCapacity)
		numberOfBottles++;

	std::cout << numberOfBottles << '\n';

	return 0;
}