#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;
	res = a > 10 && a != 50;
	printf("a > 10 && a != 50 : %d\n", res);
	res = a == 20 || a != 10;
	printf("a == 20 || a != 10 : %d\n", res);
	res = !(a > 10);
	printf("!(a > 10) : %d\n", res);
	res = 10 < a < 20;
	printf("10 < a < 20 : %d", res);

	return 0;
}