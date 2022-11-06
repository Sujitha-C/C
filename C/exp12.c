#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int i,j;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(i==0)
		{
			s[i]=s[i]-32;
		}
		else if(s[i]==' ')
		{
			s[i+1]=s[i+1]-32;
			s[i-1]=s[i-1]-32;
		}
		else if(i==strlen(s)-1)
		{
			s[i]=s[i]-32;
		}
	}
	for(i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
}
