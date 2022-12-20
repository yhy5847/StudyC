#include <stdio.h>

int main(void)
{
	int res = sizeof(short) < sizeof(long);
	if(sizeof(short) == sizeof(long))
	{
		res = 0;
	}
	printf("%d", res);

	return 0;
}