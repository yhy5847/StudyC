#include <stdio.h>

int main(void)
{
	int ch, fst = 0, sec = 0;

	ch = getchar();

	while (ch != EOF)
	{
		if (ch == '\n')
		{
			if(fst < sec) fst = sec;
			sec = -1;
		}

		++sec;
		ch = getchar();
	}

	printf("���� �� �ܾ��� ���� : %d", fst);

	return 0;
}