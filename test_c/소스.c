#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main(void)
{
	int a, b;
	int ans1, ans2, ans3, ans4;

	scanf("%d%d", &a, &b);
	ans1 = a * (b % 10);
	ans2 = a * ((b % 100) / 10);
	ans3 = a * (b / 100);
	ans4 = a * b;
	
	printf("%d\n%d\n%d\n%d", ans1, ans2, ans3, ans4);

	return 0;
}