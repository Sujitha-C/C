#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s[100],temp;
	int i,j,a;
	a=0;
	gets(s);
	
for(i=0;i<strlen(s);i++)
{
	for(j=i+1;j<=strlen(s);j++)
	{
		if(s[i]==s[j])
		{
			a++;
			s[j]='*';
		}
	}
    if(s[i]!='*')
    {
   		printf("%c%d",s[i],a+1);
	}
	a=0;
}
	}
