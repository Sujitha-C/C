#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s[100],temp;
	int i,n;
	gets(s);
	n=strlen(s);
	while(i<=n/2)
	{
		n--;
		temp=s[i];
		s[i]=s[n];
		s[n]=temp;
		i++;
	}
	for(i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
}
