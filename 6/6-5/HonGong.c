#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("누적 값 : %d\n마지막으로 더한 값 : %d", sum, i);

	return 0;
}