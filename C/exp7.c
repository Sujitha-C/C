#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[100],temp;
	int i,j,n,c;
	gets(s);
	n=strlen(s);
    for(i=0;i<strlen(s);i++)
    {
    	c=0;
    	for(j=i+1;j<n;j++)
    	{
    		if(s[i]==s[j])
    		{
    			c++;
    			s[j]='*';
			}
		}
		if(c==0)
		{
			if(s[i]!='*')
			printf("%c",s[i]);
		}
	}
}
