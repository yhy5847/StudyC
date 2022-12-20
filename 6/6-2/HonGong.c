#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0; i < 3; ++i)
	{
		a *= 2;
	}

	printf("a = %d, i = %d", a, i);

	return 0;
}