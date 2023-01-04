#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int cnt, i, j;

	printf("��� �Է� : ");
	scanf("%d", &cnt);

	int* prime = (int*)malloc((cnt) * sizeof(int));

	if (prime == NULL)
	{
		printf("�޸� ����");
		exit(1);
	}

	for (i = 0; i < cnt; ++i)
	{
		prime[i] = i+2;
	}

	for (i = 0; i < cnt-1; ++i)
	{
		for (j = 2; j <= i + 2; ++j)
		{
			if (prime[i] % j == 0 && prime[i] != j)
			{
				printf("%c\t", 'x');
				break;
			}
			
			if(prime[i] == j)
			{
				printf("%d\t", prime[i]);
				break;
			}
		}
	}

	return 0;
}