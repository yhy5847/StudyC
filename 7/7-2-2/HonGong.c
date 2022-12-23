#include <stdio.h>

void sum(int x);

int main(void)
{
	sum(10);
	sum(100);

	return 0;
}

void sum(int x)
{
	int ans;

	if (x % 2 == 0)
	{
		ans = (x + 1) * (x / 2);
	}
	else
	{
		ans = (x + 1) * (x / 2) + ((x / 2) + 1);
	}

	printf("1부터 %d까지의 합은 %d입니다.", x, ans);
}