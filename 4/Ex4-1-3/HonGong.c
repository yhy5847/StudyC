#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double kor, eng, mat;	
	double kscore, escore, mscore;

	printf("신청하신 학점 정보를 국어, 영어, 수학 순으로 입력하시오.\n");
	scanf("%lf%lf%lf", &kor, &eng, &mat);

	double credits = kor + eng + mat;

	printf("국어 영어 수학 순서대로 점수를 입력하시오.\n");
	scanf("%lf%lf%lf", &kscore, &escore, &mscore);

	double grade = (kscore + escore + mscore) / 3;
	char res = grade >= 4.0 && credits >= 10;

	printf("평점 평균 4.0이상 + 신청학점 10이상 : %d\n", res);

	return 0;
}