#include <fstream>

using namespace std;



int main ()
{
	ifstream inputFile("sum.in");
	ofstream outputFile("sum.out");

	int firstNumber, secondNumber;
	inputFile >> firstNumber >> secondNumber;

	int sumOfNumbers = firstNumber + secondNumber;
	outputFile << sumOfNumbers << '\n';

	return 0;
}