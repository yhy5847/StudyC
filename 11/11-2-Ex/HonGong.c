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

	printf("가장 긴 단어의 길이 : %d", fst);

	return 0;
}