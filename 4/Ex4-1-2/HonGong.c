#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	double ave;
	
	printf("�� ������ ������ �Է��Ͻÿ�.\n");
	scanf("%lf%lf", &a, &b);

	ave = (a + b) / 2;
	
	printf("������� : %.1lf", ave);

	return 0;
}