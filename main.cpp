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

		std::cout << "Enter 'X' to exit or 'C' to continue.\n";
		char exitOrContinue{};
		std::cin >> exitOrContinue;

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
			std::cout << "Invalid input detected... terminating program.\n";
			return 1;
		}

	}
}