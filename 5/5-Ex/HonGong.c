#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int fst, sec, ans;
	char cal;

	printf("��Ģ���� �Է�(����) : ");
	scanf("%d%c%d", &fst, &cal, &sec);

	if (cal == '+')
	{
		ans = fst + sec;
	}
	else if (cal == '-')
	{
		ans = fst - sec;
	}
	else if (cal == '*')
	{
		ans = fst * sec;
	}
	else if (cal == '/')
	{
		ans = fst / sec;
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}

	printf("�� : %d", ans);

	return 0;
}