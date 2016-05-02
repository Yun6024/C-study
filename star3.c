#include<stdio.h>
int main()
{
	int num,i,j,k=0,l,m;
	printf("Input number : ");
	scanf("%d",&num);
	for(i=num;i>=1;--i)
	{
		k=num-1;
		m=i-1;
		for(j=2*num-1;j>=1;j--)
		{
			l=k*k-m*m;
			if(l>=0)
			{
				printf("*");
				--k;
			}
			else
			{
				printf(" ");
				--k;
			}
		}
		printf("\n");
	}
	return 0;
}
