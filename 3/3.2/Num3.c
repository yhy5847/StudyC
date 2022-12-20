#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자입력 : ");
	scanf("%c", &ch);
	printf("출력 : %d", ch);

	return 0;
}