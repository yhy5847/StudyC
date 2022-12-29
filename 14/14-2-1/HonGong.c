#include <stdio.h>

int main(void)
{
	char* fruits[] = { "apple", "pear", "peach", "banana", "melon" };

	for (int i = 0; i < 5; ++i)
	{
		printf("%s ", fruits[i]);
	}

	return 0;
}