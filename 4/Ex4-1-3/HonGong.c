#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double kor, eng, mat;	
	double kscore, escore, mscore;

	printf("��û�Ͻ� ���� ������ ����, ����, ���� ������ �Է��Ͻÿ�.\n");
	scanf("%lf%lf%lf", &kor, &eng, &mat);

	double credits = kor + eng + mat;

	printf("���� ���� ���� ������� ������ �Է��Ͻÿ�.\n");
	scanf("%lf%lf%lf", &kscore, &escore, &mscore);

	double grade = (kscore + escore + mscore) / 3;
	char res = grade >= 4.0 && credits >= 10;

	printf("���� ��� 4.0�̻� + ��û���� 10�̻� : %d\n", res);

	return 0;
}