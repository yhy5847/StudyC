#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;


	printf("int = %zd\ndouble = %zd\n정수형 상수 = %zd\n수식의 결과값 = %zd\nchar = %zd", sizeof(a), sizeof(b), sizeof(10), sizeof(1.5 + 3.4), sizeof(char));
	return 0;
}