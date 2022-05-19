#include <iostream>

double getDouble();
char getOperator();
void printCalculation(double firstDouble, double secondDouble, char op);

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