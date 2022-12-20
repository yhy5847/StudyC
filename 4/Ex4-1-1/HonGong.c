#include <stdio.h>

int main(void)
{
	double a = 4.0, b = 1.2;
	double add = a + b, 
		sub = a - b, 
		mul = a * b, 
		div = a / b;

	printf("a + b = %.1lf\na - b = %.1lf\na * b = %.1lf\na / b = %.1lf", add, sub, mul, div);

	return 0;

}