#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	double ave;
	
	printf("두 과목의 점수를 입력하시오.\n");
	scanf("%lf%lf", &a, &b);

	ave = (a + b) / 2;
	
	printf("평균점수 : %.1lf", ave);

	return 0;
}