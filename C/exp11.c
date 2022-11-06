#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s[100][100],n,i,j,c,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",s[i][j]);
		}
		printf("\n");
	}	
	k=0;
	c=0;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		  if(i>j)
		  {
		  	if(s[i][j]==0)
		  	{
		  		printf("%d",s[i][j]);
		  		c++;
			  }
		  }
		  if(i<j)
		  {
		  	if(s[i][j]==0)
		  	{
		  		printf("%d",s[i][j]);
		  		k++;
			  }
		  }
		}
	}
	if(c==n)
	{
		printf("upper triangular matrix");
	}
	else if(k==n)
	{
		printf("lower triangular matrix");
	}
	else
	{
		printf("neither upper nor lower triangular matrix");
	}
}
