#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("실수 값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*midp < *minp)
	{
		swap(midp, minp);
	}
	
	if (*maxp < *minp)
	{
		swap(midp, maxp);
		swap(midp, minp);
	}
	else if (*maxp < *midp)
	{
		swap(maxp, midp);
	}
}