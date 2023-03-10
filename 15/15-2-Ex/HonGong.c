#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char* type, void* fst, void* sec);

int main(void)
{
	int age1, age2;
	double height1, height2;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age1, &height1);

	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("첫 번째 사람의 나이와 키 : ");
	printf("%d, %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : ");
	printf("%d, %.1lf", age2, height2);

	return 0;
}

void swap(char* type, void* fst, void* sec)
{
	if (strcmp(type, "int") == 0)
	{
		int temp = *(int*)fst;
		*(int*)fst = *(int*)sec;
		*(int*)sec = temp;
	}
	else if (strcmp(type, "double") == 0)
	{
		double temp = *(double*)fst;
		*(double*)fst = *(double*)sec;
		*(double*)sec = temp;
	}
}