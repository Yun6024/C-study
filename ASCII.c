#include<stdio.h>
int ASCII(int character);
void output(char character);
int main()
{
	printf("input the number of ASCII : ");
	char character=ASCII(character);
	output(character);
	return 0;
}
int ASCII(int character)
{
	scanf("%d",&character);
	return character;
}
void output(char character)
{
	printf("the character is \"%c\"\n",character);
}
