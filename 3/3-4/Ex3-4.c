#include <stdio.h>

int main(void)
{
	unsigned int a;

	a = 9999999999;
	printf("%d\n", a);
	a = -1;
	printf("%u", a);

	return 0;
}