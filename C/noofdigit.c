#include<stdio.h>
#include<stdlib.h>
void main()
{
    long int n,i,s=0,r,a=0;
	printf("enter the number..\n");
	scanf("%ld",&n);
	for(i=0;i<n;i/n)
	{
		r=n%10;
		s=s+r*10;
		n=n/10;
		a++;
	}
	printf("%ld",a);
}
