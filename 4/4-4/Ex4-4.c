#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("�ʱⰪ\na : %d\nb : %d\n", a, b);
	printf("������ : %d\n������ : %d", pre, post);

	return 0;
}