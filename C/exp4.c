#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=0;j--)
		{
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf("*");
		}
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		for(k=n-i;k>0;k--)
		{
			printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
	    for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=n-i-1;k>=0;k--)
		{
			printf("*");
		}
			for(j=n-i-1;j>0;j--)
		{
			printf("*");
		}
		printf("\n");		
	}
}
