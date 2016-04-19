#include<stdio.h>
int input(int day);
void output(int week,int days);
int main()
{
	printf("input days : ");
	int day=input(day);
	int week=day/7;
	int days=day%7;
	output(week,days);
	return 0;
}
int input(int day)
{
	scanf("%d",&day);
	return day;
}
void output(int week,int days)
{
	if (week!=0)
	{
		printf("%d weeks ",week);
	}
	if (days!=0)
	{
		printf("%d days\n",days);
	}
	else
	{
		printf("\n");
	}
}
