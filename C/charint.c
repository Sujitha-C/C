#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,c=0,b;
 char a[10];
 gets(a);
 for(i=0;i<strlen(a);i++)
 {
 	printf("%d\n",a[i]);
 }
 for(i=0;i<strlen(a);i++)
 {
 	sum=sum+a[i];
 }
 printf("%d\n",sum);
 if(sum>9)
 {
 	for(i=0;i<sum;i/sum)
 	{
 		b=sum%10;
 		c=c+b;
 		sum=sum/10;
	 }
 }
 printf("%d\n",c);
}
