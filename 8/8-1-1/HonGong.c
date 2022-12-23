#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[5];
	double b[10];
	int c[] = { 1, 2, 3 };
	char d[5];

	for (int i = 0; i < 4; ++i)
	{
		scanf("%s", &d[i]);
	}

	for (int i = 0; i < 4; ++i)
	{
		printf("%c", d[i]);
	}

	return 0;
}