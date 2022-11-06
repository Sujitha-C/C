#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[1000],temp,a[1000];
	int n,i,j,k,x;
	gets(s);
	n=strlen(s);
	x=0;
	for(i=n;i>0;i--)
	{
		if(s[i]==' ')
		{
			k=i+1;
			for(j=k;s[j]!='\0';j++)
			{
				a[x]=s[j];
				x++;
			}
			a[x]=' ';
			x++;
			s[i]='\0';
	}
	}
	for(i=0;s[i]!='\0';i++)
		{
			a[x]=s[i];
			x++;
		}
	for(j=0;j<x;j++)
		{
			printf("%c",a[j]);
		}
}
