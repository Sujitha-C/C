#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		b=b+a;
		a=b-a;
		b=b-a;
}
	printf("%d%d",a,b);
 } 
