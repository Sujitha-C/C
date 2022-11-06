#include<stdio.h>
int main()
{
	int n,i,j,sp,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j>0;j--)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
}



