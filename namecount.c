#include<stdio.h>
#include<string.h>
void input(char name[]);
void nameout(char name[]);
void length(char name[]);
int main()
{
	char family_name[20];
	char last_name[20];
	printf("Write your family name : ");
	input(family_name);
	printf("Write your last name : " );
	input(last_name);
	nameout(family_name);
	nameout(last_name);
	printf("\n");
	length(family_name);
	length(last_name);
	printf("\n");
	return 0;
}
void input(char name[])
{
	scanf("%s",name);
}
void nameout(char name[])
{
	printf("%s ",name);
}
void length(char name[])
{
	int line=strlen(name);
	printf("%*d ",line,line);
}
