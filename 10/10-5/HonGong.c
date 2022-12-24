#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary, 5);

	return 0;
}

void print_ary(int* pa, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", pa[i]);
	}
}