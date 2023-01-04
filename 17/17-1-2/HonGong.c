#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct cracker
{
	int price;
	int cal;
};

int main(void)
{
	struct cracker ck;

	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf("%d%d", &ck.price, &ck.cal);
	printf("바사삭의 가격 : %d\n", ck.price);
	printf("바사삭의 열량 : %d", ck.cal);

	return 0;
}