#include <stdio.h>

int main(void)
{
	int a = 0;

	if (a < 0)
	{
		a -= a;
	}
	else if (a % 2 == 0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}

	printf("a : %d", a);

	return 0;
}