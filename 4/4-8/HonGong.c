#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d , b = %d\na / b = %.2lf\n", a, b, res);

	a = (int)res;
	printf("(double)res = %.2lf\n(int)res = %d", res, a);

	return 0;
}