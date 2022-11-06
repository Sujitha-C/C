#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==j)
			printf("%d",i);
			else
			printf(" ");
	    }
	    for(j=0;j<n;j++)
		{
			if(i==0 || j==n-i-1)
			printf("%d",i);
			else
			printf(" ");
	    }
		printf("\n");
	}
}
