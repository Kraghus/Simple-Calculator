#include <iostream>

double getDouble();
char getOperator();
void printCalculation(double firstDouble, double secondDouble, char op);

int main()
{
	double firstDouble{ getDouble() };					//asks user for the first double value
	double secondDouble{ getDouble() };					//asks user for the second double value
	char op{ getOperator() };							//asks user which operator to use
	printCalculation(firstDouble, secondDouble, op);	//passes input to be calculated and printed

	return 0;
}