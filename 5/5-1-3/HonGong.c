#include <stdio.h>

int main(void)
{
	double height = 178;
	double weight = 70.1;

	if (height >= 187.5 && weight < 80.0)
	{
		printf("ok");
	}
	else
	{
		printf("cancel");
	}
	printf("\nheight : %.1lf\nweight : %.1lf", height, weight);

	return 0;
}