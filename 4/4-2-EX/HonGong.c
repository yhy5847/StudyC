#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("Ű(m����)�� �����Ը� �Է��Ͻÿ�.\n");
	scanf("%lf%lf", &height, &weight);

	double bmi = weight / (height * height);

	printf("bmi���� : %.2lf\n", bmi);

	if (bmi < 18.5)
	{
		printf("��ü��");
	}
	else if (bmi > 23.0) {
		printf("��ü��");
	}
	else
	{
		printf("����");
	}

	return 0;
}