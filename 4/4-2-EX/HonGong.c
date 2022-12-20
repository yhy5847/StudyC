#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("키(m단위)와 몸무게를 입력하시오.\n");
	scanf("%lf%lf", &height, &weight);

	double bmi = weight / (height * height);

	printf("bmi지수 : %.2lf\n", bmi);

	if (bmi < 18.5)
	{
		printf("저체중");
	}
	else if (bmi > 23.0) {
		printf("과체중");
	}
	else
	{
		printf("정상");
	}

	return 0;
}