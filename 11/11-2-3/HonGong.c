#include <stdio.h>
int main(void)
{
	int ch;
	int cnt = 0;
	ch = getchar();

	while (ch != '\n')
	{
		if ('a' <= ch && ch <= 'z') ++cnt;
		ch = getchar();
	}

	printf("�ҹ����� ���� : %d", cnt);

	return 0;
}