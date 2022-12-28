#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fst_str[80], sec_str[80], thr_str[80], temp[80];

	printf("세 단어 입력 : ");
	scanf("%s%s%s", fst_str, sec_str, thr_str);

	if (strcmp(fst_str, sec_str) > 0)
	{
		strcpy(temp, fst_str);
		strcpy(fst_str, sec_str);
		strcpy(sec_str, temp);
	}
	
	if (strcmp(fst_str, thr_str) > 0)
	{
		strcpy(temp, fst_str);
		strcpy(fst_str, thr_str);
		strcpy(thr_str, temp);
	}
	
	if (strcmp(sec_str, thr_str) > 0)
	{
		strcpy(temp, sec_str);
		strcpy(sec_str, thr_str);
		strcpy(thr_str, temp);
	}

	printf("%s, %s, %s", fst_str, sec_str, thr_str);

	return 0;

}