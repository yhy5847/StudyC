#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("a : %d\nb : %d\nc : %d\nda : %.1lf\nch : %c\n", a, b, c, da, ch);

	return 0;
}