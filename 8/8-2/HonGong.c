#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int score_ary_size = sizeof(score) / sizeof(int);
	int i;
	int total = 0;
	double avg;

	printf("5과목 점수를 입력하시오.\n");

	for (i = 0; i < score_ary_size; ++i)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < score_ary_size; ++i)
	{
		total += score[i];
	}

	avg = (double)total / score_ary_size;

	for (i = 0; i < score_ary_size; ++i)
	{
		printf("%d과목 : %d점\n", i + 1, score[i]);
	}

	printf("평균 : %.1lf", avg);

	return 0;
}