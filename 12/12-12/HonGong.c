#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");

	if (strncmp(str1, str2, 3) == 0)
	{
		printf("����");
	}
	else
	{
		printf("�ٸ���");
	}

	return 0;
}