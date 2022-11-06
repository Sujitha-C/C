#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char a[100];
	int i,j,temp=0;
	printf("enter the string..\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
	  for(j=i+1;j<strlen(a);j++)
	  {
	  	if(a[i]>a[j+1])
	  	{
	  		a[j]=a[j+1];
	  		a[j+1]=a[j];
		  }
	  }
	}
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
	}
}
