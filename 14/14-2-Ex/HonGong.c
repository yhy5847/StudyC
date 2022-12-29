#include <stdio.h>

int main(void)
{
	int i, j;
	int comb;
	int fin_ary[6] = { 0 };
	int ary[5][6] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};

	for (i = 0; i < 5; ++i)
	{
		comb = 0;
		for (j = 0; j < 6; ++j)
		{
			comb += ary[i][j];

			if (j == 5)
			{
				ary[i][j] = comb;
			}
			
			if (i == 4)
			{
				ary[i][j] = fin_ary[j];
			}
			else
			{
				fin_ary[j] += ary[i][j];
			}
		}
	}



	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 6; ++j)
		{
			printf("%5d", ary[i][j]);
		}
		printf("\n");
	}

	return 0;
}
