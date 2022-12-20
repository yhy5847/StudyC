#include <stdio.h>

int main(void)
{
	int a = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a++;
			printf("%d. Be happy~\n", a);

			if (j == 2) break;
		}
	}
}