#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,k,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		k=i;
		for(j=1;j<=i;j++)
		{
		   	printf("%d",k);
			k--;
		}
		printf("\n");
	}
}
