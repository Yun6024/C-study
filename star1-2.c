#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=5;i>=-5;i--)
	{
		k=i*i;
		for(j=0;j*j<k;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
