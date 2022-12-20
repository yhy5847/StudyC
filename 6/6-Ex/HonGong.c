#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int inputNum;

	printf("2 이상의 정수를 입력 : ");
	scanf("%d", &inputNum);

	for (int i = 2; i <= inputNum; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i != j && i % j == 0)
			{
				break;
			}

			if (i == j)
			{
				printf("%d	", i);
			}
		}
	}

	return 0;
}