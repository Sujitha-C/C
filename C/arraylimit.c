#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i,j,n,a[100],limit,sum,temp=0,add=0,d=0,e=0;
void check(int a[],int n);
void main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	scanf("%d",&sum);
		 check(a,n);
}
void check(int a[],int n)
{
	for(i=1;i<=n;i++)
	{
		add=a[i];
		for(j=i+1;j<=n;j++)
		{
		  add=add+a[j];
		  if(add==sum)
		  {
		  	d=i;
		  	e=j;
		}
	}
}
	for(i=d;i<=e;i++)
	{
		printf("%d",a[i]);
	}
		}
