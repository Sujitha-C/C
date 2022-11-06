#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<n-i-1;k++)
		{
			printf("*");
		}
		for(l=n-i-1;l>=0;l--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		for(l=i-1;l>=0;l--)
		{
			printf("*");
		}
		printf("\n");
	}
}
