#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int s[100][100],i,j,m,n,t,b,l,r,d;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	t=0;
	b=m-1;
	l=0;
	r=n-1;
	d=0;
	while(t<=b && l<=r)
	{
		if(d==0)
		{
			for(i=t;i<=r;i++)
			{
				printf("%d ",s[t][i]);
			}
			t++;
			d=1;
		}
		if(d==1)
		{
			for(i=t;i<=r;i++)
			{
				printf("%d ",s[i][r]);
			}
			r--;
			d=2;
		}
		if(d==2)
		{
			for(i=r;i>=l;i--)
			{
				printf("%d ",s[b][i]);
			}
			b--;
			d=3;
		}
		if(d==3)
		{
			for(i=b;i>=t;i--)
			{
				printf("%d ",s[i][l]);
			}
			l++;
			d=4;
		}
		d=d%4;
	}
}
