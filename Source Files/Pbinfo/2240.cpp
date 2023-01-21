#include <iostream>

using namespace std;



int main ()
{
	unsigned short int numberOfDogs;

	std::cin >> numberOfDogs;

	unsigned short int numberOfCats, numberOfChickens;
	numberOfCats = numberOfDogs * 2;
	numberOfChickens = numberOfCats * 2;

	unsigned short int totalNumberOfAnimals = numberOfDogs + numberOfCats + numberOfChickens;

	std::cout << totalNumberOfAnimals << '\n';

	return 0;
}