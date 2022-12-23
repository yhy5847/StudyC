#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int get_num(void);

int main(void)
{
	printf("반환값 : %d\n", get_num());

	return 0;
}

int get_num(void)
{
	int num;

	do
	{
		printf("양수 입력 : ");
		scanf("%d", &num);
	} while (num < 0);

	return num;
}