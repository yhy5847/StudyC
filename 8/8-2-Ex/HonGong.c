#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char input[80];
	int i = 0;
	int count = 0;
	printf("¹®Àå ÀÔ·Â : ");
	gets(input);

	while (input[i])
	{
		if (65 <= input[i] && input[i] <= 90)
		{
			input[i] += 32;
			++count;
		}

		++i;
	}

	printf("¹Ù²ï ¹®Àå :");
	puts(input);
	printf("¹Ù²ï È½¼ö : %d", count);

}