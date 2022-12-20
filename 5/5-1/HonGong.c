#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > b)
	{
		b = a;
	}

	printf("%d", b);

	return 0;
}