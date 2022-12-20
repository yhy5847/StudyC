#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int fst, sec, ans;
	char cal;

	printf("사칙연산 입력(정수) : ");
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
		printf("잘못 입력하셨습니다.");
	}

	printf("답 : %d", ans);

	return 0;
}