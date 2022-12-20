#include <stdio.h>

int main(void)
{
	double time = 3.76;
	int hour = (int)time;
	int min = (int)(60 * (time - hour));
	int sec = (int)(60 * ((60 * (time - hour) - min)));

	printf("%d : %d : %d", hour, min, sec);


	return 0;
}