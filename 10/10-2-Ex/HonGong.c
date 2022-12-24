#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	int i, j;

	for (i = 0; i < 6; ++i)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &(lotto_nums[i]));
		
		for (j = 0; j < i; ++j)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				--i;
				break;
			}
		}
	}
}

void print_nums(int* lotto_num)
{
	int i;

	for (i = 0; i < 6; ++i)
	{
		printf("%d ", lotto_num[i]);
	}
}