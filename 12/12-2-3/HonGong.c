#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char input_str[80], output_str[80];
	
	printf("�ܾ� �Է� : ");
	scanf("%s", input_str);
	
	strcpy(output_str, input_str);
	if (strlen(input_str) > 6)
	{
		for (int i = 5; i < strlen(input_str); ++i)
		{
			output_str[i] = '*';
		}
	}

	printf("�Է��� �ܾ� : %s, ������ �ܾ� : %s", input_str, output_str);

	return 0;
}