#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input_str[80], output_str[80];
	
	printf("단어 입력 : ");
	scanf("%s", input_str);
	
	strcpy(output_str, input_str);
	if (strlen(input_str) > 6)
	{
		for (int i = 5; i < strlen(input_str); ++i)
		{
			output_str[i] = '*';
		}
	}

	printf("입력한 단어 : %s, 생략한 단어 : %s", input_str, output_str);

	return 0;
}