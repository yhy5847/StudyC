#include <stdio.h>

int main(void)
{
	int kor = 70;
	int eng = 80;
	int mat = 90;
	
	int tot = kor + eng + mat;

	printf("국어 : %d\n수학 : %d\n영어 : %d\n총점 : %d", kor, eng, mat, tot);

	return 0;
}