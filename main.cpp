// This program collects 2 operands and 1 operator as user input and
// outputs the solution to the console.

#include <iostream>
#include "io.h"

int main()
{
	while (true)
	{
		// asks the user for the first double value and stores the return value as type int
		double firstDouble{ getDouble() };

		// asks the user which operator to use and stores the return value as type char
		char op{ getOperator() };

		// asks the user for the second double value and stores the return value as type int
		double secondDouble{ getDouble() };

		// uses stored values to pass user input in order to be calculated and printed
		printCalculation(firstDouble, secondDouble, op);

	// return here if the user entered an invalid character
	// not best practice, will create a looping function in the future
	tryAgain:
		std::cout << "Enter 'X' to exit or 'C' to continue.\n";
		char exitOrContinue{};
		std::cin >> exitOrContinue;

		// clears any extraneous input
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		// asks the user to exit or continue the program loop
		if ((exitOrContinue == 'X') || (exitOrContinue == 'x'))
		{
			return 0;
		}
		else if ((exitOrContinue == 'C') || (exitOrContinue == 'c'))
		{
			continue;
		}
		else
		{
			std::cout << "Invalid input detected... try again.\n";
			goto tryAgain;
		}

	}
}