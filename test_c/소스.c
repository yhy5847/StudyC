#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main(void)
{
	unsigned int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	
	a += c / 60;
	b += c % 60;

	if (b > 59)
	{
		a += 1;
		b -= 60;
	}

	if (a > 23)
	{
		a %= 24;
	}

	printf("%d %d", a, b);

	return 0;
}