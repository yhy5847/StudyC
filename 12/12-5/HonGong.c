#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);

	return 0;
}