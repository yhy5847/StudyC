#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != b);
	printf("a != b : %d", res);

	return 0;
}