#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar();
	printf("�Է��� ���� : ");
	putchar(ch);
	putchar('\n');
	printf("%d", ch);

	return 0;
}