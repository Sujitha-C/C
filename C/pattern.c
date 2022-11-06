#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int i,j,k,l;
	gets(s);
	printf("enter the char..\n");
	for(i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
	printf("\npyramid...\n");
	for(i=0;i<strlen(s);i++)
	{
		for(j=0;j<strlen(s);j++
		{
			if(i==j||j==strlen(s)-i-1)
			printf("%c",s[i]);
			else
			printf(" ");
		}
		printf("\n");
	}
}
