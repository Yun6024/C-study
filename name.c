#include<stdio.h>
#include<string.h>
void input(char name[]);
void output(int length,char name[]);
int main()
{
	char name[20];
	printf("Write your name.\n");
	input(name);
	int length=strlen(name);
	length=length*1.5;
	printf("print is \n");
	output(length,name);
	return 0;
}
void input(char name[])
{
	scanf("%s",name);
}
void output(int length,char name[])
{
	printf("%*s\n",length,name);
}
