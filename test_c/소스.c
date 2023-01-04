#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d%d", &a, &b);
	long double ans = (long double)a / (long double)b;
	printf("%lf", ans);

	return 0;
}