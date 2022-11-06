#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void  main()
{
	int n,j,sum,i,r;
	sum=0;
	j=0;
	scanf("%d",&n);
	printf("bin to dec...");
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*pow(2,j));
		n=n/10;
		j++;
	}
	printf("%d",sum);
}
