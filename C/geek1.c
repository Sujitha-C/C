#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i=0,a=0,j=0;
    char s1[100],s2[100],c[100],d[100];
    gets(s1);
    gets(s2);
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]=='*')
		{
			if(s1[i+1]=='*')
			{
				s1[i-1]='*';
				s1[i-2]='*';
			}
			else
			{
				s1[i-1]='*';
			}
	 }
	}
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
		printf("%c",s1[i]);
	}
	}
	for(i=0;i<strlen(s2);i++)
	{
		if(s2[i]=='*')
		{
		if(s2[i+1]=='*')
			{
				s2[i-1]='*';
				s2[i-2]='*';
			}
			else
			{
				s1[i-1]='*';
			}	
		}
	}
	for(i=0;i<strlen(s2);i++)
	{
		if(s2[i]>='a'&&s2[i]<='z')
		{
		printf("%c",s2[i]);
	}
	}
    for(i=0;i<strlen(s1);i++)
    {
    	for(j=0;j<strlen(s2);j++)
    	{
    		a=strcmp(s1,s2);
		}
	}
	if(a==0)
	printf("true");
	else
	printf("false");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

