#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int n,i,j;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		a[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]=='(')
		{
			for(j=i;j<n;j++)
			{
				if(s[j]==')' && a[j]!=0 )
				{
					s[i]=s[i];
					s[j]=s[j];
					break;
				}
				else if(s[i]!='(' && s[j]!=')')
				{
					s[i]=s[i];
					s[j]=s[j];
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
}
