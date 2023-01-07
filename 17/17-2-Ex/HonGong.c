#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int num;
	char name[20];
	int kor, eng, math, tot;
	double ave;
	char grade;
}Student;

void input_data(Student* ps);
void show_data(Student* ps);

int main(void)
{
	Student students[5];

	input_data(students);
	show_data(students);

	return 0;
}

void input_data(Student *ps)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("학번 : ");
		scanf("%d", &ps[i].num);
		printf("이름 : ");
		scanf("%s", ps[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d%d%d", &ps[i].kor, &ps[i].eng, &ps[i].math);
		ps[i].tot = ps[i].kor + ps[i].eng + ps[i].math;
		ps[i].ave = ps[i].tot / 3.0;
		
		if (ps[i].ave >= 90) ps[i].grade = 'A';
		else if (ps[i].ave >= 80) ps[i].grade = 'B';
		else if (ps[i].ave >= 70) ps[i].grade = 'C';
		else ps[i].grade = 'F';
	}
}

void show_data(Student* ps)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d%5s%5d%5d%5d%5d\t%.1lf%5c\n", ps[i].num, ps[i].name, ps[i].kor, ps[i].eng, ps[i].math, ps[i].tot, ps[i].ave, ps[i].grade);
	}
}