#include "io.h"
#include <iostream>

double getDouble()
{
	std::cout << "Enter a double value: ";
	double number{};
	std::cin >> number;
	return number;
}

char getOperator()
{
	std::cout << "Enter one of the following operators: +, -, *, or /: ";
	char op{};
	std::cin >> op;
	return op;
}

void printCalculation(double firstDouble, double secondDouble, char op)
{
	if (op == '+')
		std::cout << firstDouble << " + " << secondDouble << " is " << (firstDouble + secondDouble) << '\n';
	else if (op == '-')
		std::cout << firstDouble << " - " << secondDouble << " is " << (firstDouble - secondDouble) << '\n';
	else if (op == '*')
		std::cout << firstDouble << " * " << secondDouble << " is " << (firstDouble * secondDouble) << '\n';
	else if (op == '/')
		std::cout << firstDouble << " / " << secondDouble << " is " << (firstDouble / secondDouble) << '\n';
	else
		std::cout << "You entered an invalid operator. Try again.\n";
}