#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s[100];
	int i,c,n,q;
	gets(s);
	n=strlen(s);
	c=0;
	q=n/2;
	while(i<=n/2)
	{
		n--;
		if(s[i]==s[n])
		{
			c++;
		}
		i++;
	}
	if(c==q)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
