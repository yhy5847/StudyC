#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이 : %d\n키 : %.1lf", age, height);

	return 0;
}