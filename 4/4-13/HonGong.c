#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\na ^ b : %d\na | b : %d\n~a : %d\na << 1: %d\na >> 2 : %d", a & b, a ^ b, a | b, ~a, a << 1, a >> 2);

	return 0;
}