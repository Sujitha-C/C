#include<stdio.h>
#include<stdlib.h>
void main()
{
	int b,p,i,ans;
	ans=1;
	scanf("%d%d",&b,&p);
	for(i=0;i<p;i++)
	{
		ans=ans*b;
	}
	printf("ans...%d",ans);
}
