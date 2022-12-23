#include <stdio.h>

//int sum(int x, int y);

int main(void)
{
	double a = 10, b = 20;

	printf("result : %d\n", sum(a, b));

	return 0;
}

double sum(double x, double y)
{
	return x + y;
}