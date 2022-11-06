#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			printf("%d",j);
		}
		for(k=i;k>0;k--)
		{
			printf("%d",k-1);
		}
		printf("\n");
	}
}

