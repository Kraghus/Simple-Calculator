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
		std::cout << firstDouble << " + " << secondDouble << " is " << (firstDouble + secondDouble);
	else if (op == '-')
		std::cout << firstDouble << " - " << secondDouble << " is " << (firstDouble - secondDouble);
	else if (op == '*')
		std::cout << firstDouble << " * " << secondDouble << " is " << (firstDouble * secondDouble);
	else if (op == '/')
		std::cout << firstDouble << " / " << secondDouble << " is " << (firstDouble / secondDouble);
	else
		std::cout << "You entered an invalid operator. Try again.";
}
int main()
{
	double firstDouble{ getDouble() };					//asks user for the first double value
	double secondDouble{ getDouble() };					//asks user for the second double value
	char op{ getOperator() };							//asks user which operator to use
	printCalculation(firstDouble, secondDouble, op);	//passes input to be calculated and printed

	return 0;
}