#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[100];
	int i,j,n,k;
	gets(s);
	n=strlen(s);
	k=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%c",s[i]);
			}
			else if(i+j==n-1)
			{
				printf("%c",s[k-1]);
			}
			else
			{
				printf(" ");
			}
		}
		k--;
		printf("\n");
	}
}
