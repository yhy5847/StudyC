#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초기값\na : %d\nb : %d\n", a, b);
	printf("전위형 : %d\n후위형 : %d", pre, post);

	return 0;
}