#include <stdio.h>

int main(void) 
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a : %d, b : %d\n", a, b);
	printf("���� : %d, ���� : %d, ���� : %d, ������ : %d", sum, sub, mul, inv);

	return 0;
}