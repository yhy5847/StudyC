#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = (double*)p;
	printf("%lf\n", *pd);
	printf("%d", a);

	

	return 0;
}