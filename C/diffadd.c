#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i,j,temp=1,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("%d\n",temp);
		temp=temp+i;
		if(temp>=n)
	     exit(0);
	}
}
