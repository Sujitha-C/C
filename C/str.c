#include<stdio.h>
void main()
{
	char a[100],b[100],c[100];
	int i;
	gets(a);
	printf("enter the string...\n");
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	printf("upper case...\n");
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			b[i]=a[i];
			printf("%c",b[i]);
		}
	}
	printf("\n");
	printf("lower case...\n");
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			c[i]=a[i];
			printf("%c",c[i]);
		}
	}
}
