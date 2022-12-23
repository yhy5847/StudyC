#include <stdio.h>

double metric(double cm);

int main(void)
{
	printf("%.3lf m", metric(187));

	return 0;
}

double metric(double cm)
{
	return cm / 100;
}