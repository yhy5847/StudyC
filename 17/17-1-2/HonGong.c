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

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d%d", &ck.price, &ck.cal);
	printf("�ٻ���� ���� : %d\n", ck.price);
	printf("�ٻ���� ���� : %d", ck.cal);

	return 0;
}