#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,k,l,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		for(j=0;j<(2*(n-i-1))+1;j++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
