#include <stdio.h>

int main(void)
{
	int a[6] = { 1,2,3,0,0,0 };

	for (int i = 0; i < 6; ++i)
	{
		printf("%d", a[i]);
	}

	return 0;
}