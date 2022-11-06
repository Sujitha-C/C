#include<stdio.h>
int main()
{
	int n,a,c=0,d,e=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i/n)
	{
		a=n%10;
		c=c+a;
		n=n/10;
	}
	if(c>9)
	{
		for(i=0;i<c;i/c)
		{
		d=c%10;
		e=e+d;
		c=c/10;
	   }
	}
	printf("%d",e);
	return 0;
}
