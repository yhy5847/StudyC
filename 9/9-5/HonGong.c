#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ�� : %zd\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %zd\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %zd\n", sizeof(&db));

	printf("char * �������� ũ�� : %zd\n", sizeof(pc));
	printf("int * �������� ũ�� : %zd\n", sizeof(pi));
	printf("double * �������� ũ�� : %zd\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %zd\n", sizeof(*pc));
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %zd\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %zd\n", sizeof(*pd));

	return 0;
}