#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int studentNum;
	char name[13];
	long double grade;

	printf("�й�, �̸�, ���������� �Է����ּ���.\n");
	scanf("%d%s%lf", &studentNum, name, &grade);
	printf("�й� : %d\n�̸� : %s\n���� : %.2lf\n", studentNum, name, grade);
	return 0;
}