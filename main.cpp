// This program collects 2 operands and 1 operator as user input and
// outputs the solution to the console.

#include <iostream>
#include "io.h"

int main()
{
	// asks the user for the first double value and stores the return value as type int
	double firstDouble{ getDouble() };	
	
	// asks the user which operator to use and stores the return value as type char
	char op{ getOperator() };			

	// asks the user for the second double value and stores the return value as type int
	double secondDouble{ getDouble() };

	// uses stored values to pass user input in order to be calculated and printed
	printCalculation(firstDouble, secondDouble, op);

	// requires key press to exit instead of exiting directly after displayed result
	system("pause");

	return 0;
}