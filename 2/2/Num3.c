#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int studentNum;
	char name[13];
	long double grade;

	printf("학번, 이름, 학점순으로 입력해주세요.\n");
	scanf("%d%s%lf", &studentNum, name, &grade);
	printf("학번 : %d\n이름 : %s\n학점 : %.2lf\n", studentNum, name, grade);
	return 0;
}