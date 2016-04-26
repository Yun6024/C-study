#include<stdio.h>
int main()
{
	int i,j,k,l,m;
	for(i=3;i>=-3;i--)
	{
		k=i*i;
		m=0;
		for(j=0;j*j<k;--j)
		{
			printf(" ");
		}
		for(l=3;l*l>k;--l)
		{
			++m;
		}
		m=2*m-1;
		for(;m>0;m--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
