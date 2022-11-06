#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[100][100],i,j,n,a[100][100],k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
			a[i][j]=0;
		}
	}
	k=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[j][k]=s[i][j];
		}
		k--;
	}
	printf("clockwise :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	k=n-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[k][j]=s[i][j];
		}
		k--;
	}
	printf("Anticlockwise:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
