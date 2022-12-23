#include <stdio.h>

int main(void)
{
	int A[3] = { 1, 2, 3 };
	int B[10];
	int sizeof_A = sizeof(A) / sizeof(int);
	int sizeof_B = sizeof(B) / sizeof(int);

	for (int i = 0; i < sizeof_B; ++i)
	{
		B[i] = A[i % sizeof_A];
	}

	for (int i = 0; i < sizeof_B; ++i)
	{
		printf("%d\n", B[i]);
	}

	return 0;
}