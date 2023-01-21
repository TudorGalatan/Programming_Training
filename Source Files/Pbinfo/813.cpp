#include <iostream>

using namespace std;



int main ()
{
	unsigned short int whiteBalls;

	std::cin >> whiteBalls;

	unsigned short int redBalls, greenBalls;
	redBalls = whiteBalls * 2;
	greenBalls = redBalls - 3;

	unsigned short int totalNumberOfBalls;
	totalNumberOfBalls = whiteBalls + redBalls + greenBalls;

	std::cout << totalNumberOfBalls << '\n';

	return 0;
}