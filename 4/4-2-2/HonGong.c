#include <stdio.h>

int main(void)
{
	double seat = 70, aud = 65;
	double rate = aud / seat * 100;
	printf("����� : %.2lf", rate);

	return 0;
}