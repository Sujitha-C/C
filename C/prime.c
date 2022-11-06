#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int n,a=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   if(n%i==0)
	   {
	   	a++;
	   }
	}
	if(a==2)
	printf("it is prime");
	else
	printf("it is not");
}

