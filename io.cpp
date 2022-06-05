// This file holds all function definitions for input & output.

#include "io.h"
#include <iostream>

// Asks the user for a double value, stores it, and returns the stored value to
// the main function.
double getDouble()
{
	std::cout << "Enter a double value: ";
	double number{};
	std::cin >> number;
	return number;
}

// Asks the user for an arethmetic operator, stores it as a char, and returns it
// to the main function.
char getOperator()
{
	while (true)
	{
		std::cout << "Enter one of the following operators: +, -, *, /, or %: ";
		char op{};
		std::cin >> op;

		// clears any extraneous input
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		// checks to see if the user has entered a valid operator
		if ((op == '+') || (op == '-') || (op == '*') || (op == '/') || (op == '%'))
		{
			return op;
		}
		else
		{
			std::cout << "Invalid operator chosen. Please try again.\n";
			continue;
		}
	}
}

// Takes in parameters of user input from main and compares char literal to determine
// which calculation to use and what to print back to the user.
void printCalculation(double firstDouble, double secondDouble, char op)
{
	switch (op)
	{
	case '+':
		std::cout << firstDouble << " + " << secondDouble << " is " << (firstDouble + secondDouble) << '\n';
		break;
	case '-':
		std::cout << firstDouble << " - " << secondDouble << " is " << (firstDouble - secondDouble) << '\n';
		break;
	case '*':
		std::cout << firstDouble << " * " << secondDouble << " is " << (firstDouble * secondDouble) << '\n';
		break;
	case '/':
		std::cout << firstDouble << " / " << secondDouble << " is " << (firstDouble / secondDouble) << '\n';
		break;
	case '%':
		std::cout << firstDouble << " % " << secondDouble << " is " <<
				  // Converts double values to integer values in order to use modulus operator.
			      (static_cast<int>(firstDouble) % static_cast<int>(secondDouble)) << '\n';
		break;
	default:
		std::cout << "You entered an invalid operator. Try again.\n";
		return;
	}
}