#include <stdio.h>

double ave(double x, double y);

int main(void)
{
	printf("%.3lf", ave(1.5, 3.4));

	return 0;
}

double ave(double x, double y)
{
	return (x + y) / 2;
}