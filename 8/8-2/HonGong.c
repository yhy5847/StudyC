#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5];
	int score_ary_size = sizeof(score) / sizeof(int);
	int i;
	int total = 0;
	double avg;

	printf("5���� ������ �Է��Ͻÿ�.\n");

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
		printf("%d���� : %d��\n", i + 1, score[i]);
	}

	printf("��� : %.1lf", avg);

	return 0;
}