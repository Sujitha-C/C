#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[100][100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 && 0<j<n)
			{
				printf("*");
			}
			else if(j==n-1 && 0<i<n)
			{
				printf("*");
			}
			else if(i==n-1 && 0<j<n)
			{
				printf("*");
			}
			else if(0<i<n && j==0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
