#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("정수 입력 : ");
	scanf("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("false");
		break;
	default:
		printf("true");
		break;
	}

	return 0;
}