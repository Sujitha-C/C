#include<stdio.h>
#include<stdlib.h>
void  main()
{
	int n,i,s[100],c;
	scanf("%d",&n);
	i=0;
	c=0;
	while(n>0)
	{
		c++;
		s[i]=n%2;
		n=n/2;
		i++;
	}
	printf("dec to binary...");
	for(i=c-1;i>=0;i--)
    {
    	printf("%d",s[i]);
	}
}
