#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int n,i,j,a[100];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		a[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]=='(' && a[i]!=0)
		{
			for(j=i;j<n;j++)
			{
				if(s[j]==')' && a[j]!=0)
				{
					a[i]=0;
					a[j]=0;
					break;
				}
				else if(s[j]!='(' && s[j]!=')')
				{
					a[j]=0;
				}
			}
		}
         else if(s[i]!='(' && s[i]!=')')
		{
					a[i]=0;
		}   
		if(a[i]==0)
		{
			printf("%c",s[i]);
		}
	}
}
