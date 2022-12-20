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
	printf("µ¡¼À : %d, »¬¼À : %d, °ö¼À : %d, À½¼ö°ö : %d", sum, sub, mul, inv);

	return 0;
}