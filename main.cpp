/* This program collects 2 operands and 1 operator as user input and */
/* outputs the solution to the console.								 */

#include "io.h"

int main()
{
	/* asks user for the first double value */
	double firstDouble{ getDouble() };	

	/* asks user for the second double value */
	double secondDouble{ getDouble() };	
	
	/* asks user which operator to use */
	char op{ getOperator() };			

	/* passes input to be calculated and printed */
	printCalculation(firstDouble, secondDouble, op);

	return 0;
}